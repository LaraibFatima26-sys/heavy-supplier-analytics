# Week 8: Customer Intelligence & RFM Segmentation

## 1. Project Overview & Deliverables
This module focuses on customer analytics using a B2B **RFM (Recency, Frequency, Monetary) Scoring Model** to segment accounts, identify high-value clients, evaluate retention dynamics, and mitigate churn risk across regional sales territories[cite: 1, 2].

* **Full Analytics Google Doc Report:** [https://docs.google.com/document/d/1j2nr4v4WyDiRKnHjfh9Zs0SSFEgd25j6KqKI_77V84U/edit?usp=sharing]

---

## 2. Customer RFM Segmentation Matrix

Below is the segment breakdown based on transaction recency, purchase frequency, and cumulative lifetime spend[cite: 2]:

| Customer Segment | RFM Score Range | Customer Share (%) | Avg Recency | Avg Annual Orders | Revenue Contribution | Recommended Action Strategy |
| :--- | :---: | :---: | :---: | :---: | :---: | :--- |
| **Champions (Key Accounts)** | 5-5-5 / 5-5-4 | **15%** | < 15 days | 24+ orders | **42%** | Dedicated account management, priority inventory reservation[cite: 2]. |
| **Loyal Customers** | 4-4-4 / 4-5-4 | **25%** | 15–30 days | 15–23 orders | **31%** | Tiered volume discounts, cross-selling heavy attachments[cite: 2]. |
| **Potential Loyalists** | 4-2-3 / 3-3-3 | **20%** | 30–60 days | 8–14 orders | **14%** | Flexible credit terms, customized maintenance bundles[cite: 2]. |
| **At-Risk Accounts** | 2-4-4 / 2-3-4 | **18%** | 60–120 days | 10–18 orders | **9%** | Proactive feedback calls, re-engagement pricing incentives[cite: 2]. |
| **Churned / Dormant Accounts** | 1-1-2 / 1-1-1 | **22%** | > 120 days | 1–3 orders | **4%** | Automated win-back campaigns, inventory clearance catalogs[cite: 2]. |

---

## 3. RFM Scoring Framework

Accounts are scored on a 1-to-5 scale across three core parameters[cite: 2]:
* **Recency (R):** Days elapsed since the last Sales Order (SO) creation date[cite: 2]. Score 5 = Purchased within <15 days; Score 1 = Inactive >120 days[cite: 2].
* **Frequency (F):** Total number of distinct sales orders placed within 12 months[cite: 2]. Score 5 = >20 orders/yr; Score 1 = <3 orders/yr[cite: 2].
* **Monetary (M):** Cumulative net invoice value in INR[cite: 2]. Score 5 = Top 20% total revenue spend; Score 1 = Bottom 20% spend[cite: 2].

---

## 4. Key Analytical Insights & Retention Dynamics

* **Revenue Concentration:** Top-tier segments (**Champions & Loyal Customers**) represent 40% of the customer base but drive **73% of total revenue**[cite: 2].
* **Churn Vulnerability:** **18% of accounts** are classified as *At-Risk*[cite: 2]. Analysis indicates that stockouts and delayed delivery times in heavy hydraulics and engine parts are the primary drivers of purchase frequency decline[cite: 2].
* **Customer Lifetime Value (CLV):** Re-engaging *At-Risk* accounts within 60 days increases customer retention by 28% and stabilizes steady-state spare parts demand[cite: 2].

---

## 5. Strategic Recommendations

1. **Automated Churn Trigger Alerts:** Implement automated CRM notifications when a Champion account's Recency score drops below threshold levels[cite: 2].
2. **Priority Stock Allocation:** Guarantee stock fulfillment for Tier-1 RFM clients during periods of inventory strain[cite: 2].
3. **Structured Win-Back Programs:** Deploy tailored pricing incentives for dormant accounts with historically high Monetary scores[cite: 2].
