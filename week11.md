# Week 11: Business Intelligence (BI) Dashboards & Role-Specific KPI Architecture

## 1. Project Overview & Deliverables
This module designs an enterprise **BI Dashboard Architecture** (compatible with Power BI, Streamlit, and Tableau) providing role-specific KPI views, interactive warehouse space heatmaps, supplier reliability gauges, and financial leakage audit controls[cite: 1, 5].

* **Full Analytics Google Doc Report:** [Click Here to View Week 11 Detailed Report](https://docs.google.com/document/d/1XRV2a3DvnWtkYzNGc9GeticrWjXL5G5AK1jay66nV8s/edit?usp=sharing]

---

## 2. Role-Based BI Dashboard Matrix & KPI Architecture

Below is the layout specification for the four core dashboard views and target executive personas[cite: 5]:

| Dashboard View | Target Executive Persona | Primary KPIs & Visual Components | Interactive Slicers & Filters |
| :--- | :---: | :--- | :--- |
| **1. Executive Strategic Overview** | C-Suite (CEO, COO, CFO) | Total Revenue, Operating Margin %, Working Capital, OTIF Fulfillment Rate %, Regional Inventory Turnover[cite: 5]. | Fiscal Year, Geographic Hubs, Product Line[cite: 5]. |
| **2. Inventory Health & Space Capacity** | VP Logistics / Warehouse Ops Lead | Floor Utilization Heatmap (%), Stock Ageing Buckets, Safety Stock / ROP Alerts, Dead Stock Capital[cite: 5]. | Branch ID, Category (Hydraulics, Engine), Storage Bay Type[cite: 5]. |
| **3. Supplier Performance & Risk** | Chief Procurement Officer (CPO) | Supplier Lead Time Std Dev ($\sigma_L$), OTIF Fulfillment %, Weighted Health Score, Vendor Dependency Gauge[cite: 5]. | Supplier ID (SUP0001–SUP0008), Category, PO Status[cite: 5]. |
| **4. Financial Leakage & Audit Control** | Finance Director / Audit Lead | Total Financial Leakage Value, Shrinkage Counts, GST Tax Rate Mismatches, Negative Margin Transactions[cite: 5]. | Audit Status, Discrepancy Threshold, Tax Slab, Date Range[cite: 5]. |

---

## 3. Technical Architecture & UI/UX Wireframe

### A. Power BI / Tableau Grid Layout
* **KPI Summary Band:** Top metric cards displaying actual vs. target benchmarks with dynamic color alerts (Green = Target Met, Red = Breach Alert)[cite: 5].
* **4-Quadrant Analytics Canvas:**
  * **Top-Left:** Spatial Heatmap (Branch-wise warehouse floor stress)[cite: 5].
  * **Top-Right:** Time-Series Chart (Predictive Demand Forecast vs. Actual Sales Volume)[cite: 5].
  * **Bottom-Left:** Stacked Bar Chart (Inventory Valuation by Ageing Buckets)[cite: 5].
  * **Bottom-Right:** Scatter Matrix (Supplier Lead Time vs. Delivery Variance)[cite: 5].
* **Drill-Through Action Grid:** SKU-level transaction table with deep-dive functionality[cite: 5].

### B. Streamlit Python Architecture Blueprint

```python
import streamlit as st

st.set_page_config(layout="wide", page_title="Heavy Analytics BI Portal")
st.title("Heavy Supplier, Inventory & Warehouse Analytics Dashboard")

# Global Sidebar Filters
branch = st.sidebar.multiselect("Select Branch", ["PUN001", "DEL001", "AHM001", "CHN001", "HYD001", "KOL001"])
category = st.sidebar.multiselect("Select Category", ["Hydraulic", "Engine", "Transmission", "Undercarriage"])

# Top KPI Metric Cards
c1, c2, c3, c4 = st.columns(4)
c1.metric("Total Revenue", "₹55.6B", "+8.4%")
c2.metric("OTIF Fulfillment", "94.2%", "+1.5%")
c3.metric("Capacity Stress", "86.5%", "-3.1%")
c4.metric("Audit Exposure", "₹50.0M", "142 Flags")
