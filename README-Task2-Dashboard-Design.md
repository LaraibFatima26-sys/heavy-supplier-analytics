Task 2: Dashboard Built for a Specific Person

1. Stated Audience & Supported Decision

Target Role: Chief Operating Officer (COO) / VP of E-Commerce Operations.

Core Decision Supported: Weekly Fulfillment & Logistics Allocation Strategy

Primary Question: "Where do we need to reallocate warehouse staffing or switch shipping carriers this week to prevent customer delivery delays?"

Operational Scope: This dashboard focuses strictly on order fulfillment speed, carrier performance, and backlog bottlenecks. It intentionally excludes marketing metrics, overall sales revenue, or customer demographics.

2. Included Views & Justification (Restraint Assessment)

To prevent clutter and ensure rapid decision-making, the dashboard is limited to four primary views:

View 1: Fulfillment SLA Performance (% Shipped within 24 Hours)

Visual Type: Single Value KPI Card with Target Comparison Gauge.

Justification: Directly answers whether warehouse labor is keeping pace with current order volume. If this dips below 95%, the COO immediately knows warehouse staffing needs adjustment.

View 2: Unfulfilled Order Aging Pipeline (Backlog Breakdown)

Visual Type: Stacked Bar Chart / Heatmap (<24h, 24–48h, 48–72h, >72h).

Justification: Highlights operational bottlenecks before they turn into customer service complaints. Orders over 72 hours old require immediate emergency intervention.

View 3: In-Transit SLA & Delay Days by Carrier

Visual Type: Horizon Comparison Bar Chart (Target Days vs. Actual Transit Days per Carrier).

Justification: Informs carrier management decisions. Allows the COO to quickly see if a specific logistics partner (e.g., UPS vs. FedEx) is causing delivery breaches and shift volume accordingly.

View 4: Delivery Exception & Return Rate Trend

Visual Type: 14-Day Line Trend Chart.

Justification: Tracks critical shipping failures (failed delivery attempts, lost packages, returned-to-sender items) to determine if carrier contract penalties or packaging adjustments are needed.

3. Non-Technical Filter Controls

Designed for ease of use by non-technical executives:

Date Range Picker: Simple dropdown menu (Today, Last 7 Days, Last 30 Days, Quarter to Date).

Fulfillment Center / Hub Selector: Multi-select dropdown (East Coast Hub, West Coast Hub, European Hub).

Carrier Filter: Single-click buttons (All Carriers, FedEx, UPS, DHL).

4. Written Note: Deliberately Excluded Metrics

To maintain maximum restraint and focus on operational decisions, the following common metrics were deliberately removed:

Gross Revenue & Average Order Value (AOV): Revenue tracking belongs to Finance and Sales. A COO needs to ship orders efficiently regardless of whether an order cost $10 or $1,000.

Marketing Conversion Rates & Customer Acquisition Cost (CAC): Top-of-funnel marketing performance does not inform fulfillment labor or carrier selection.

SKU-Level Inventory Stock Levels: Detailed stock counts belong to inventory procurement teams. Aggregating SKU details here would clutter the executive view.

5. Dashboard Layout & Visual Wireframe

+-----------------------------------------------------------------------------------+
|  [ COO Operations Dashboard ]   Filters: [ Last 7 Days v ] [ All Hubs v ] [ Carrier v ] |
+-----------------------------------------------------------------------------------+
|  [ View 1: 24h Fulfillment SLA ]       |  [ View 2: Aging Unfulfilled Backlog ]    |
|  Current: 91.4% (Target: 95.0%)       |  >72h: 142 orders [CRITICAL ALERT]       |
|  [====================......]          |  48-72h: 310 orders | 24-48h: 1,120 orders |
+----------------------------------------+------------------------------------------+
|  [ View 3: Transit SLA by Carrier ]    |  [ View 4: Delivery Exception Rates ]    |
|  - FedEx: 2.1 Days (On Target)         |  Failed Deliveries: 1.8%                  |
|  - UPS:   3.8 Days (+1.2 Days Delay)   |  Lost in Transit:   0.4%                  |
|  - DHL:   2.4 Days (On Target)         |  Trend: +0.3% vs Last Week               |
+-----------------------------------------------------------------------------------+
