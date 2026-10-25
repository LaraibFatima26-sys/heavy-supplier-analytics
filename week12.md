# Heavy Supplier, Inventory & Warehouse Analytics

## Executive Overview
This enterprise supply chain analytics project delivers an end-to-end framework for managing heavy machinery spare parts, warehouse spatial capacity, vendor reliability, customer RFM segmentation, predictive demand forecasting, and financial leakage audit controls across regional distribution hubs (AHM001, DEL001, CHN001, HYD001, KOL001, PUN001)[cite: 1, 6].


Google doc link[https://docs.google.com/document/d/1_5sr9JOst5y7X5PrCmuSVCJZK8PSv4RbQMuV8GGhn8Q/edit?usp=sharing]---

## 📁 Project Modules & Google Docs Strategy Reports

Below is the master index of all project modules, core methodologies, and their dedicated strategy documentation reports[cite: 6]:

| Week / Module | Core Analytical Focus | Strategic Deliverables | Executive Report Link |
| :--- | :--- | :--- | :---: |
| **Week 6** | Warehouse Space Utilisation & Capacity Analytics | Branch-wise throughput, dock bottleneck identification, cantilever rack strategy[cite: 1, 6]. | [View Week 6 Doc Report](https://docs.google.com/document/d/1s-fKUL2IaTGeC4Z89KeNbeDSgJc4jygL9Jrmbo02xhg/edit?usp=drive_web)[cite: 6] |
| **Week 7** | Supplier Reliability & Risk Matrix | OTIF fulfillment rates, lead time variance (CV %), weighted vendor scoring model[cite: 1, 6]. | [View Week 7 Doc Report](https://docs.google.com/document/d/1s-fKUL2IaTGeC4Z89KeNbeDSgJc4jygL9Jrmbo02xhg/edit?usp=drive_web)[cite: 6] |
| **Week 8** | Customer Intelligence & RFM Segmentation | RFM customer scoring (1-5 scale), high-value retention, churn risk classification[cite: 2, 6]. | [View Week 8 Doc Report](https://docs.google.com/document/d/1j2nr4v4WyDiRKnHjfh9Zs0SSFEgd25j6KqKI_77V84U/edit?usp=drive_web)[cite: 6] |
| **Week 9** | Predictive Demand Forecasting & Safety Stock | Time-series forecasting (Prophet/XGBoost), Safety Stock ($SS$) & Reorder Point ($ROP$) formulas[cite: 3, 6]. | [View Week 9 Doc Report](https://docs.google.com/document/d/1fHRKz3skmepiKOohfXdxw2WA4ihfHUIiLkVf_HCJK2c/edit?usp=drive_web)[cite: 6] |
| **Week 10** | Risk, Anomaly & Control Analytics | Stock shrinkage detection, GST rate mismatch SQL queries, 3-way matching audit engine[cite: 4, 6]. | [View Week 10 Doc Report](https://docs.google.com/document/d/1J2U8zGehxUZipMOjynp2897XQHtyud3sgdYFkcb8Efc/edit?usp=drive_web)[cite: 6] |
| **Week 11** | Business Intelligence Dashboards | Power BI / Streamlit UI blueprints, role-tailored KPI views (Ops, Procurement, Finance)[cite: 5, 6]. | [View Week 11 Doc Report](https://docs.google.com/document/d/1XRV2a3DvnWtkYzNGc9GeticrWjXL5G5AK1jay66nV8s/edit?usp=drive_web)[cite: 6] |
| **Week 12** | Portfolio Finalization & Executive Presentation | 10-slide C-Suite presentation deck structure, clean repo architecture, final submission[cite: 6]. | [View Week 12 Doc Report](https://docs.google.com/document/d/1_5sr9JOst5y7X5PrCmuSVCJZK8PSv4RbQMuV8GGhn8Q/edit?usp=drive_web)[cite: 6] |

---

## 📊 Executive Presentation Deck Structure (10-Slide Summary)

1. **Slide 1: Title & Executive Summary** – Project objectives, scope, and key performance targets[cite: 6].
2. **Slide 2: Regional Warehouse Capacity & Bottlenecks** – Throughput velocity and spatial stress maps[cite: 6].
3. **Slide 3: Supplier Reliability & Vulnerability Matrix** – Lead time variance ($\sigma_L$) and OTIF scoring[cite: 6].
4. **Slide 4: B2B Customer RFM Segmentation** – High-value account retention (73% revenue concentration)[cite: 6].
5. **Slide 5: Time-Series Demand Forecasting** – Predictive model performance across SKU categories[cite: 6].
6. **Slide 6: Mathematical Safety Stock & ROP Optimization** – Statistically derived safety stock buffers[cite: 6].
7. **Slide 7: Risk, Anomaly & Financial Leakage Audit** – ₹50.0M identified audit exposure and control rules[cite: 6].
8. **Slide 8: Enterprise BI Dashboard Portal** – Power BI & Streamlit UI layouts for multi-role personas[cite: 6].
9. **Slide 9: Strategic Implementation Roadmap** – 90-day execution plan for procurement and logistics[cite: 6].
10. **Slide 10: Conclusion & Project Links** – Final repository wrap-up and documentation access[cite: 6].

---

## 💻 Repository Directory Structure

```text
heavy-supplier-inventory-warehouse-analytics/
│
├── README.md                          # Master GitHub README with complete project overview
├── LICENSE                            # MIT Open-Source License
├── requirements.txt                   # Dependencies (pandas, scikit-learn, xgboost, prophet, streamlit)
│
├── data/
│   ├── raw/                           # Raw PO and SO datasets
│   └── processed/                     # Cleaned & aggregated feature datasets
│
├── notebooks/
│   ├── 01_warehouse_capacity.ipynb    # Week 6 analytics
│   ├── 02_supplier_reliability.ipynb  # Week 7 analytics
│   ├── 03_rfm_segmentation.ipynb      # Week 8 analytics
│   ├── 04_demand_forecasting.ipynb    # Week 9 analytics & ROP models
│   └── 05_anomaly_audit.ipynb         # Week 10 audit queries
│
├── src/
│   ├── forecasting_engine.py          # Predictive forecasting module
│   ├── safety_stock.py                # Mathematical ROP/SS calculation engine
│   └── anomaly_detector.py            # SQL & Pandas leakage audit scripts
│
├── dashboards/
│   ├── app.py                         # Streamlit Interactive Dashboard portal
│   └── power_bi_template.pbit         # Power BI visual template file
│
└── docs/
    ├── executive_presentation.pdf     # C-Suite 10-slide presentation export
    └── strategy_reports/              # Linked Google Docs markdown exports
    pip install -r requirements.txt
    **streamlit run dashboards/app.py**
