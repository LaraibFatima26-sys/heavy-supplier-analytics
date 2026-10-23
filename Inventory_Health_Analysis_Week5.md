# Week 5: Inventory Health & Stock Aging Analysis

## Executive Summary & Findings

Is analysis mein inventory turnover ratio, stock aging buckets, aur stock health flags ko calculate kiya gaya hai taakay overstocking aur understocking risks ko manage kiya ja sakay.

### 1. Key Insights & Action Plan
* **Understock Risk (Immediate Action Required):**
  * **SKU-101 (Wireless Mouse):** Current stock (15) reorder level (50) se kam hai[cite: 2].
  * **SKU-104 (USB-C Cable):** Current stock (8) reorder level (100) se kam hai[cite: 2].
  * **Action:** Direct purchase orders issue karein taakay potential sales loss se bacha ja sakay.

* **Overstock & Aging Risk (Capital Blocked):**
  * **SKU-102 (Mech Keyboard):** Stock age 105 days (**90+ Days Bucket**) hai aur stock quantity 220 units hai[cite: 2].
  * **SKU-105 (Desk Mat):** Stock age 78 days (**61–90 Days Bucket**) hai aur stock quantity 180 units hai[cite: 2].
  * **Action:** In items ke liye promotional sales, bundling offers, ya clearance discounts launch karein taakay locked capital release ho sakay.

* **Healthy Inventory:**
  * **SKU-103 (Gaming Monitor):** Balanced stock levels aur healthy turnover ratio (10.0) show kar raha hai[cite: 2].

---

## Technical Methodology & Formulas

1. **Inventory Turnover Ratio (ITR):**
   $$\text{ITR} = \frac{\text{COGS}}{\text{Average Inventory Value}}$$

2. **Stock Aging Buckets:**
   * `<30 Days`: Fresh Stock[cite: 2]
   * `31–60 Days`: Normal Movement[cite: 2]
   * `61–90 Days`: Slow Moving[cite: 2]
   * `90+ Days`: Obsolete / Dead Stock Risk[cite: 2]

3. **Stock Health Flag Logic:**
   * **UNDERSTOCK:** $\text{Current Stock} < \text{Reorder Level}$[cite: 2]
   * **OVERSTOCK:** $\text{Current Stock} > 2.5 \times \text{Reorder Level}$[cite: 2]
   * **HEALTHY:** Normal threshold range[cite: 2]

---

## Deliverables & Links

## Deliverables & Links

* **Google Colab Notebook Link:** [https://colab.research.google.com/drive/1k-VzRCwy-6SorcRgx3zC04dniCxMj4pD?usp=sharing]
* **Google Drive Link:** [https://drive.google.com/file/d/16OjFb3DWHfB4rKKDXmiNInb7f1GWu816/view?usp=sharing]
* **Dataset File:** `Inventory_Health_Analysis_Week5 (1).csv`[cite: 1, 2]
* **Python Notebook File:** `Week5_Inventory_Health_Analysis.ipynb`
