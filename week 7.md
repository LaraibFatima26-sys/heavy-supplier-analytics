# Week 7: Supplier Reliability & Risk Matrix

## 1. Project Overview & Deliverables
This module evaluates Supplier Fulfillment Rates, Lead Time Variance, Weighted Supplier Scoring, and Concentration/Single-Supplier Dependency Risks across key equipment vendors[cite: 1].

* **Full Analytics Google Doc Report:** [https://docs.google.com/document/d/1s-fKUL2IaTGeC4Z89KeNbeDSgJc4jygL9Jrmbo02xhg/edit?usp=sharing]

---

## 2. Vendor Fulfillment & Delivery Delay Performance

Below is the comparative performance across primary suppliers based on order execution, quantity fulfillment, total procurement spend, and delivery lead time variance[cite: 1]:

| Supplier ID | Total PO Lines | Total Spend (INR) | Fulfillment Rate (%) | Avg Lead Time (Days) | Lead Time Std Dev | Lead Time Variance (CV %) | Risk Rating |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: | :--- |
| **SUP0001** | 19,395 | ₹55.64B | 100% | 28.85 | 10.89 | 37.74% | **Low Risk / Reliable** |
| **SUP0002** | 19,227 | ₹53.28B | 100% | 28.97 | 11.05 | 38.14% | **Moderate Variance Risk** |
| **SUP0003** | 19,411 | ₹55.64B | 100% | 28.61 | 10.80 | 37.73% | **Lowest Lead Time** |
| **SUP0004** | 19,099 | ₹54.06B | 100% | 29.04 | 10.94 | 37.69% | **Stable Fulfillment** |
| **SUP0005** | 19,884 | ₹57.02B | 100% | 29.01 | 10.92 | 37.66% | **Highest Volume / Stable** |
| **SUP0006** | 19,740 | ₹55.09B | 100% | 28.93 | 11.08 | 38.32% | **Highest Variance Risk** |
| **SUP0007** | 19,546 | ₹55.60B | 100% | 28.96 | 10.91 | 37.68% | **High Consistency** |
| **SUP0008** | 19,193 | ₹55.35B | 100% | 28.99 | 10.93 | 37.71% | **Stable Fulfillment** |

---

## 3. Composite Supplier Scoring Model Framework

Suppliers are ranked using a weighted multi-vector performance score[cite: 1]:
* **Order Fulfillment Score (40% Weight):** Evaluates quantity delivered against quantity ordered[cite: 1].
* **Lead Time Consistency Score (30% Weight):** Penalizes suppliers with high delivery variance (Coefficient of Variation %)[cite: 1]. **SUP0003** ranks highest due to lowest average lead time, while **SUP0006** ranks lowest due to high delivery variance[cite: 1].
* **Cost Competitiveness Score (20% Weight):** Measures unit pricing consistency and bulk procurement efficiency[cite: 1].
* **Volume Capacity Capability (10% Weight):** Evaluates supplier responsiveness to order volume surges in key categories (e.g., Engines & Hydraulics)[cite: 1].

---

## 4. Single-Supplier Dependency & Concentration Risk Analysis

* **Multi-Sourcing Validation:** All 30 key SKUs across 15 equipment categories are actively multi-sourced across vendors, mitigating single-source blackout risks[cite: 1].
* **Category Expenditure Concentration:** High-value categories such as **Engine Parts** (₹145B+ spend) and **Hydraulic Assemblies** (₹124B+ spend) represent over 60% of total procurement capital[cite: 1].
* **Transit Variance Impact:** High overall lead time variance (~38% CV) requires strategic safety stock buffers across regional hubs to prevent stockouts[cite: 1].

---

## 5. Strategic Risk Mitigation Recommendations

1. **Volume Re-allocation (Dual-Sourcing):** Shift higher PO share (60/40 split) toward low-variance suppliers (**SUP0003, SUP0005**) over inconsistent vendors (**SUP0006**)[cite: 1].
2. **Standard Deviation Buffer Adjustments:** Recalculate regional safety stock thresholds using real-time supplier lead time standard deviations (~11 days)[cite: 1].
3. **Strict SLA Enforcement:** Implement delivery lead-time SLAs to minimize transit fluctuations during peak procurement windows[cite: 1].
