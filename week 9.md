# Week 9: Predictive Demand Forecasting & Safety Stock Optimization

## 1. Project Overview & Deliverables
This module establishes a B2B time-series demand forecasting framework and optimizes Safety Stock (SS) and Reorder Point (ROP) formulas across distribution centers to balance inventory holding costs with high service level targets[cite: 1, 3].

* **Full Analytics Google Doc Report:** [https://docs.google.com/document/d/1fHRKz3skmepiKOohfXdxw2WA4ihfHUIiLkVf_HCJK2c/edit?usp=sharing]

---

## 2. Demand Forecasting & Inventory Optimization Matrix

Below is the category-level forecasting model performance, lead time parameters, optimized safety stock, and reorder point threshold breakdown[cite: 3]:

| SKU Category | Time-Series Forecast Model | Forecast Accuracy (MAPE %) | Avg Daily Demand ($D_{avg}$) | Avg Lead Time ($L_{avg}$) | Optimized Safety Stock ($SS$) | Reorder Point ($ROP$) | Inventory Risk Level |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: | :--- |
| **Hydraulics & Pumps** | ARIMA / Prophet | **92.4%** | 450 units | 14 days | 1,280 units | **7,580 units** | Optimal Service Level (98%)[cite: 3] |
| **Engine Assemblies** | Holt-Winters Exponential | **88.1%** | 120 units | 28 days | 620 units | **3,980 units** | High Lead Time Volatility[cite: 3] |
| **Track Chains & Undercarriage** | XGBoost Regressor | **85.6%** | 210 units | 25 days | 1,150 units | **6,400 units** | High Holding Cost Stress[cite: 3] |
| **Seals, O-Rings & Gaskets** | Moving Average (SMA-30) | **95.8%** | 1,500 units | 7 days | 2,100 units | **12,600 units** | Low Risk / High Velocity[cite: 3] |
| **Transmission Assemblies** | Prophet + Seasonal Decomp | **89.3%** | 180 units | 20 days | 780 units | **4,380 units** | Balanced Inventory[cite: 3] |
| **Filters & Maintenance Kits** | Weighted Moving Avg (WMA) | **94.1%** | 980 units | 10 days | 1,850 units | **11,650 units** | High Forecast Predictability[cite: 3] |

---

## 3. Mathematical Optimization Formulas

### Safety Stock Formula (Variable Demand & Variable Lead Time)
To protect against supply chain shocks and demand surges, Safety Stock ($SS$) is modeled using the statistically rigorous formula[cite: 3]:

$$SS = Z \times \sqrt{(L_{avg} \times \sigma_D^2) + (D_{avg}^2 \times \sigma_L^2)}$$

* $Z$: Service level factor ($Z = 2.05$ for a target 98% Cycle Service Level)[cite: 3].
* $L_{avg}$: Average supplier lead time (days)[cite: 3].
* $\sigma_D$: Standard deviation of daily demand[cite: 3].
* $D_{avg}$: Average daily demand quantity[cite: 3].
* $\sigma_L$: Standard deviation of supplier lead time[cite: 3].

### Reorder Point (ROP) Formula
The Reorder Point triggers automated replenishment Purchase Orders (POs) when stock reaches the threshold[cite: 3]:

$$ROP = (D_{avg} \times L_{avg}) + SS$$

---

## 4. Key Analytical Insights

* **Working Capital Efficiency:** Implementing custom $Z$-factors across ABC inventory categories reduced redundant holding costs by 14% without compromising service levels[cite: 3].
* **Lead Time Volatility Impact:** For Engine and Undercarriage parts, 65% of the Safety Stock buffer is driven by supplier lead time variability ($\sigma_L$) rather than daily demand fluctuation[cite: 3].
* **Machine Learning Performance:** Prophet and XGBoost time-series regressors outperformed traditional moving averages by 12% in predicting seasonal spikes for heavy components[cite: 3].

---

## 5. Strategic Procurement Recommendations

1. **ERP Replenishment Integration:** Automate Purchase Order (PO) triggers in WMS/ERP based on real-time calculated ROP values[cite: 3].
2. **Supplier Lead Time Variance Reduction:** Contractually enforce tighter delivery lead time standard deviations ($\sigma_L$) to lower required safety stock buffers[cite: 3].
3. **ABC-Differentiated Service Levels:** Assign $Z = 2.05$ (98% service level) to Category A parts, $Z = 1.65$ (95%) to Category B, and $Z = 1.28$ (90%) to Category C[cite: 3].
