<?php
/**
 * @file
 * opendata_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function opendata_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_opendata_access_level'
  $field_bases['field_opendata_access_level'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_access_level',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'public' => 'Public',
        'restricted public' => 'Restricted Public',
        'non-public' => 'non-Public',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_opendata_bureau_code'
  $field_bases['field_opendata_bureau_code'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_bureau_code',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '310:0' => 'Access Board: Access Board (310:0)',
        '302:0' => 'Administrative Conference of the United States: Administrative Conference of the United States (302:0)',
        '306:0' => 'Advisory Council on Historic Preservation: Advisory Council on Historic Preservation (306:0)',
        '530:0' => 'Affordable Housing Program: Affordable Housing Program (530:0)',
        '309:0' => 'Appalachian Regional Commission: Appalachian Regional Commission (309:0)',
        '313:0' => 'Barry Goldwater Scholarship and Excellence in Education Foundation: Barry Goldwater Scholarship and Excellence in Education Foundation (313:0)',
        '514:0' => 'Broadcasting Board of Governors: Broadcasting Board of Governors (514:0)',
        '581:0' => 'Bureau of Consumer Financial Protection: Bureau of Consumer Financial Protection (581:0)',
        '316:0' => 'Central Intelligence Agency: Central Intelligence Agency (316:0)',
        '510:0' => 'Chemical Safety and Hazard Investigation Board: Chemical Safety and Hazard Investigation Board (510:0)',
        '465:0' => 'Christopher Columbus Fellowship Foundation: Christopher Columbus Fellowship Foundation (465:0)',
        '582:0' => 'Civilian Property Realignment Board: Civilian Property Realignment Board (582:0)',
        '323:0' => 'Commission of Fine Arts: Commission of Fine Arts (323:0)',
        '326:0' => 'Commission on Civil Rights: Commission on Civil Rights (326:0)',
        '338:0' => 'Committee for Purchase from People who are Blind or Severely Disabled, activities: Committee for Purchase from People who are Blind or Severely Disabled, activities (338:0)',
        '339:0' => 'Commodity Futures Trading Commission: Commodity Futures Trading Commission (339:0)',
        '343:0' => 'Consumer Product Safety Commission: Consumer Product Safety Commission (343:0)',
        '485:0' => 'Corporation for National and Community Service: Corporation for National and Community Service (485:0)',
        '344:0' => 'Corporation for Public Broadcasting: Corporation for Public Broadcasting (344:0)',
        '580:0' => 'Corporation for Travel Promotion: Corporation for Travel Promotion (580:0)',
        '202:0' => 'Corps of Engineers - Civil Works: Corps of Engineers - Civil Works (202:0)',
        '542:0' => 'Council of the Inspectors General on Integrity and Efficiency: Council of the Inspectors General on Integrity and Efficiency (542:0)',
        '511:0' => 'Court Services and Offender Supervision Agency for the District of Columbia: Court Services and Offender Supervision Agency for the District of Columbia (511:0)',
        '347:0' => 'Defense Nuclear Facilities Safety Board: Defense Nuclear Facilities Safety Board (347:0)',
        '517:0' => 'Delta Regional Authority: Delta Regional Authority (517:0)',
        '513:0' => 'Denali Commission: Denali Commission (513:0)',
        '5:45' => 'Department of Agriculture: Agricultural Marketing Service (5:45)',
        '5:18' => 'Department of Agriculture: Agricultural Research Service (5:18)',
        '5:32' => 'Department of Agriculture: Animal and Plant Health Inspection Service (5:32)',
        '5:19' => 'Department of Agriculture: Buildings and Facilities (5:19)',
        '5:0' => 'Department of Agriculture: Department of Agriculture (5:0)',
        '5:13' => 'Department of Agriculture: Economic Research Service (5:13)',
        '5:4' => 'Department of Agriculture: Executive Operations (5:4)',
        '5:49' => 'Department of Agriculture: Farm Service Agency (5:49)',
        '5:84' => 'Department of Agriculture: Food and Nutrition Service (5:84)',
        '5:35' => 'Department of Agriculture: Food Safety and Inspection Service (5:35)',
        '5:68' => 'Department of Agriculture: Foreign Agricultural Service (5:68)',
        '5:96' => 'Department of Agriculture: Forest Service (5:96)',
        '5:37' => 'Department of Agriculture: Grain Inspection, Packers and Stockyards Administration (5:37)',
        '5:16' => 'Department of Agriculture: Hazardous Materials Management (5:16)',
        '5:15' => 'Department of Agriculture: National Agricultural Statistics Service (5:15)',
        '5:20' => 'Department of Agriculture: National Institute of Food and Agriculture (5:20)',
        '5:53' => 'Department of Agriculture: Natural Resources Conservation Service (5:53)',
        '5:14' => 'Department of Agriculture: Office of Chief Financial Officer (5:14)',
        '5:12' => 'Department of Agriculture: Office of Chief Information Officer (5:12)',
        '5:7' => 'Department of Agriculture: Office of Civil Rights (5:7)',
        '5:8' => 'Department of Agriculture: Office of Inspector General (5:8)',
        '5:10' => 'Department of Agriculture: Office of the General Counsel (5:10)',
        '5:3' => 'Department of Agriculture: Office of the Secretary (5:3)',
        '5:47' => 'Department of Agriculture: Risk Management Agency (5:47)',
        '5:65' => 'Department of Agriculture: Rural Business - Cooperative Service (5:65)',
        '5:55' => 'Department of Agriculture: Rural Development (5:55)',
        '5:63' => 'Department of Agriculture: Rural Housing Service (5:63)',
        '5:60' => 'Department of Agriculture: Rural Utilities Service (5:60)',
        '6:30' => 'Department of Commerce: Bureau of Industry and Security (6:30)',
        '6:7' => 'Department of Commerce: Bureau of the Census (6:7)',
        '6:0' => 'Department of Commerce: Department of Commerce (6:0)',
        '6:5' => 'Department of Commerce: Departmental Management (6:5)',
        '6:6' => 'Department of Commerce: Economic Development Administration (6:6)',
        '6:8' => 'Department of Commerce: Economics and Statistics Administration (6:8)',
        '6:25' => 'Department of Commerce: International Trade and Investment Administration (6:25)',
        '6:40' => 'Department of Commerce: Minority Business Development Agency (6:40)',
        '6:55' => 'Department of Commerce: National Institute of Standards and Technology (6:55)',
        '6:48' => 'Department of Commerce: National Oceanic and Atmospheric Administration (6:48)',
        '6:54' => 'Department of Commerce: National Technical Information Service (6:54)',
        '6:60' => 'Department of Commerce: National Telecommunications and Information Administration (6:60)',
        '6:51' => 'Department of Commerce: U.S. Patent and Trademark Office (6:51)',
        '7:57' => 'Department of Defense - Military Programs: Air Force (7:57)',
        '7:45' => 'Department of Defense - Military Programs: Allowances (7:45)',
        '7:21' => 'Department of Defense - Military Programs: Army (7:21)',
        '7:97' => 'Department of Defense - Military Programs: Defense-wide (7:97)',
        '7:0' => 'Department of Defense - Military Programs: Department of Defense - Military Programs (7:0)',
        '7:30' => 'Department of Defense - Military Programs: Family Housing (7:30)',
        '7:12' => 'Department of Defense - Military Programs: International Reconstruction and Other Assistance (7:12)',
        '7:25' => 'Department of Defense - Military Programs: Military Construction (7:25)',
        '7:5' => 'Department of Defense - Military Programs: Military Personnel (7:5)',
        '7:17' => 'Department of Defense - Military Programs: Navy, Marine Corps (7:17)',
        '7:10' => 'Department of Defense - Military Programs: Operation and Maintenance (7:10)',
        '7:15' => 'Department of Defense - Military Programs: Procurement (7:15)',
        '7:20' => 'Department of Defense - Military Programs: Research, Development, Test, and Evaluation (7:20)',
        '7:40' => 'Department of Defense - Military Programs: Revolving and Management Funds (7:40)',
        '7:55' => 'Department of Defense - Military Programs: Trust Funds (7:55)',
        '18:0' => 'Department of Education: Department of Education (18:0)',
        '18:80' => 'Department of Education: Departmental Management (18:80)',
        '18:85' => 'Department of Education: Hurricane Education Recovery (18:85)',
        '18:50' => 'Department of Education: Institute of Education Sciences (18:50)',
        '18:10' => 'Department of Education: Office of Elementary and Secondary Education (18:10)',
        '18:15' => 'Department of Education: Office of English Language Acquisition (18:15)',
        '18:45' => 'Department of Education: Office of Federal Student Aid (18:45)',
        '18:12' => 'Department of Education: Office of Innovation and Improvement (18:12)',
        '18:40' => 'Department of Education: Office of Postsecondary Education (18:40)',
        '18:20' => 'Department of Education: Office of Special Education and Rehabilitative Services (18:20)',
        '18:30' => 'Department of Education: Office of Vocational and Adult Education (18:30)',
        '19:0' => 'Department of Energy: Department of Energy (19:0)',
        '19:60' => 'Department of Energy: Departmental Administration (19:60)',
        '19:20' => 'Department of Energy: Energy Programs (19:20)',
        '19:10' => 'Department of Energy: Environmental and Other Defense Activities (19:10)',
        '19:5' => 'Department of Energy: National Nuclear Security Administration (19:5)',
        '19:50' => 'Department of Energy: Power Marketing Administration (19:50)',
        '9:70' => 'Department of Health and Human Services: Administration for Children and Families (9:70)',
        '9:75' => 'Department of Health and Human Services: Administration for Community Living (9:75)',
        '9:33' => 'Department of Health and Human Services: Agency for Healthcare Research and Quality (9:33)',
        '9:20' => 'Department of Health and Human Services: Centers for Disease Control and Prevention (9:20)',
        '9:38' => 'Department of Health and Human Services: Centers for Medicare and Medicaid Services (9:38)',
        '9:0' => 'Department of Health and Human Services: Department of Health and Human Services (9:0)',
        '9:90' => 'Department of Health and Human Services: Departmental Management (9:90)',
        '9:10' => 'Department of Health and Human Services: Food and Drug Administration (9:10)',
        '9:15' => 'Department of Health and Human Services: Health Resources and Services Administration (9:15)',
        '9:17' => 'Department of Health and Human Services: Indian Health Service (9:17)',
        '9:25' => 'Department of Health and Human Services: National Institutes of Health (9:25)',
        '9:92' => 'Department of Health and Human Services: Office of the Inspector General (9:92)',
        '9:91' => 'Department of Health and Human Services: Program Support Center (9:91)',
        '9:30' => 'Department of Health and Human Services: Substance Abuse and Mental Health Services Administration (9:30)',
        '24:30' => 'Department of Homeland Security: Citizenship and Immigration Services (24:30)',
        '24:0' => 'Department of Homeland Security: Department of Homeland Security (24:0)',
        '24:10' => 'Department of Homeland Security: Departmental Management and Operations (24:10)',
        '24:85' => 'Department of Homeland Security: Domestic Nuclear Detection Office (24:85)',
        '24:70' => 'Department of Homeland Security: Federal Emergency Management Agency (24:70)',
        '24:49' => 'Department of Homeland Security: Federal Law Enforcement Training Center (24:49)',
        '24:55' => 'Department of Homeland Security: Immigration and Customs Enforcement (24:55)',
        '24:65' => 'Department of Homeland Security: National Protection and Programs Directorate (24:65)',
        '24:20' => 'Department of Homeland Security: Office of the Inspector General (24:20)',
        '24:80' => 'Department of Homeland Security: Science and Technology (24:80)',
        '24:45' => 'Department of Homeland Security: Transportation Security Administration (24:45)',
        '24:58' => 'Department of Homeland Security: U.S. Customs and Border Protection (24:58)',
        '24:60' => 'Department of Homeland Security: United States Coast Guard (24:60)',
        '24:40' => 'Department of Homeland Security: United States Secret Service (24:40)',
        '25:6' => 'Department of Housing and Urban Development: Community Planning and Development (25:6)',
        '25:0' => 'Department of Housing and Urban Development: Department of Housing and Urban Development (25:0)',
        '25:29' => 'Department of Housing and Urban Development: Fair Housing and Equal Opportunity (25:29)',
        '25:12' => 'Department of Housing and Urban Development: Government National Mortgage Association (25:12)',
        '25:9' => 'Department of Housing and Urban Development: Housing Programs (25:9)',
        '25:35' => 'Department of Housing and Urban Development: Management and Administration (25:35)',
        '25:32' => 'Department of Housing and Urban Development: Office of Lead Hazard Control and Healthy Homes (25:32)',
        '25:33' => 'Department of Housing and Urban Development: Office of Sustainable Housing and Communities (25:33)',
        '25:28' => 'Department of Housing and Urban Development: Policy Development and Research (25:28)',
        '25:3' => 'Department of Housing and Urban Development: Public and Indian Housing Programs (25:3)',
        '11:14' => 'Department of Justice: Bureau of Alcohol, Tobacco, Firearms, and Explosives (11:14)',
        '11:0' => 'Department of Justice: Department of Justice (11:0)',
        '11:12' => 'Department of Justice: Drug Enforcement Administration (11:12)',
        '11:10' => 'Department of Justice: Federal Bureau of Investigation (11:10)',
        '11:20' => 'Department of Justice: Federal Prison System (11:20)',
        '11:3' => 'Department of Justice: General Administration (11:3)',
        '11:7' => 'Department of Justice: Interagency Law Enforcement (11:7)',
        '11:5' => 'Department of Justice: Legal Activities and U.S. Marshals (11:5)',
        '11:8' => 'Department of Justice: National Security Division (11:8)',
        '11:21' => 'Department of Justice: Office of Justice Programs (11:21)',
        '11:6' => 'Department of Justice: Radiation Exposure Compensation (11:6)',
        '11:4' => 'Department of Justice: United States Parole Commission (11:4)',
        '11:30' => 'Department of Justice: Violent Crime Reduction Trust Fund (11:30)',
        '12:20' => 'Department of Labor: Bureau of Labor Statistics (12:20)',
        '12:0' => 'Department of Labor: Department of Labor (12:0)',
        '12:25' => 'Department of Labor: Departmental Management (12:25)',
        '12:11' => 'Department of Labor: Employee Benefits Security Administration (12:11)',
        '12:5' => 'Department of Labor: Employment and Training Administration (12:5)',
        '12:17' => 'Department of Labor: Employment Standards Administration (12:17)',
        '12:19' => 'Department of Labor: Mine Safety and Health Administration (12:19)',
        '12:18' => 'Department of Labor: Occupational Safety and Health Administration (12:18)',
        '12:22' => 'Department of Labor: Office of Federal Contract Compliance Programs (12:22)',
        '12:23' => 'Department of Labor: Office of Labor Management Standards (12:23)',
        '12:15' => 'Department of Labor: Office of Workers\' Compensation Programs (12:15)',
        '12:12' => 'Department of Labor: Pension Benefit Guaranty Corporation (12:12)',
        '12:16' => 'Department of Labor: Wage and Hour Division (12:16)',
        '14:5' => 'Department of State: Administration of Foreign Affairs (14:5)',
        '14:0' => 'Department of State: Department of State (14:0)',
        '14:15' => 'Department of State: International Commissions (14:15)',
        '14:10' => 'Department of State: International Organizations and Conferences (14:10)',
        '14:25' => 'Department of State: Other (14:25)',
        '10:76' => 'Department of the Interior: Bureau of Indian Affairs and Bureau of Indian Education (10:76)',
        '10:4' => 'Department of the Interior: Bureau of Land Management (10:4)',
        '10:6' => 'Department of the Interior: Bureau of Ocean Energy Management (10:6)',
        '10:10' => 'Department of the Interior: Bureau of Reclamation (10:10)',
        '10:22' => 'Department of the Interior: Bureau of Safety and Environmental Enforcement (10:22)',
        '10:11' => 'Department of the Interior: Central Utah Project (10:11)',
        '10:0' => 'Department of the Interior: Department of the Interior (10:0)',
        '10:95' => 'Department of the Interior: Department-Wide Programs (10:95)',
        '10:84' => 'Department of the Interior: Departmental Offices (10:84)',
        '10:85' => 'Department of the Interior: Insular Affairs (10:85)',
        '10:92' => 'Department of the Interior: National Indian Gaming Commission (10:92)',
        '10:24' => 'Department of the Interior: National Park Service (10:24)',
        '10:88' => 'Department of the Interior: Office of Inspector General (10:88)',
        '10:8' => 'Department of the Interior: Office of Surface Mining Reclamation and Enforcement (10:8)',
        '10:86' => 'Department of the Interior: Office of the Solicitor (10:86)',
        '10:90' => 'Department of the Interior: Office of the Special Trustee for American Indians (10:90)',
        '10:18' => 'Department of the Interior: United States Fish and Wildlife Service (10:18)',
        '10:12' => 'Department of the Interior: United States Geological Survey (10:12)',
        '15:13' => 'Department of the Treasury: Alcohol and Tobacco Tax and Trade Bureau (15:13)',
        '15:20' => 'Department of the Treasury: Bureau of Engraving and Printing (15:20)',
        '15:57' => 'Department of the Treasury: Comptroller of the Currency (15:57)',
        '15:0' => 'Department of the Treasury: Department of the Treasury (15:0)',
        '15:5' => 'Department of the Treasury: Departmental Offices (15:5)',
        '15:11' => 'Department of the Treasury: Federal Financing Bank (15:11)',
        '15:4' => 'Department of the Treasury: Financial Crimes Enforcement Network (15:4)',
        '15:12' => 'Department of the Treasury: Fiscal Service (15:12)',
        '15:60' => 'Department of the Treasury: Interest on the Public Debt (15:60)',
        '15:45' => 'Department of the Treasury: Internal Revenue Service (15:45)',
        '15:25' => 'Department of the Treasury: United States Mint (15:25)',
        '21:0' => 'Department of Transportation: Department of Transportation (21:0)',
        '21:12' => 'Department of Transportation: Federal Aviation Administration (21:12)',
        '21:15' => 'Department of Transportation: Federal Highway Administration (21:15)',
        '21:17' => 'Department of Transportation: Federal Motor Carrier Safety Administration (21:17)',
        '21:27' => 'Department of Transportation: Federal Railroad Administration (21:27)',
        '21:36' => 'Department of Transportation: Federal Transit Administration (21:36)',
        '21:70' => 'Department of Transportation: Maritime Administration (21:70)',
        '21:18' => 'Department of Transportation: National Highway Traffic Safety Administration (21:18)',
        '21:56' => 'Department of Transportation: Office of Inspector General (21:56)',
        '21:4' => 'Department of Transportation: Office of the Secretary (21:4)',
        '21:50' => 'Department of Transportation: Pipeline and Hazardous Materials Safety Administration (21:50)',
        '21:40' => 'Department of Transportation: Saint Lawrence Seaway Development Corporation (21:40)',
        '21:61' => 'Department of Transportation: Surface Transportation Board (21:61)',
        '29:25' => 'Department of Veterans Affairs: Benefits Programs (29:25)',
        '29:0' => 'Department of Veterans Affairs: Department of Veterans Affairs (29:0)',
        '29:40' => 'Department of Veterans Affairs: Departmental Administration (29:40)',
        '29:15' => 'Department of Veterans Affairs: Veterans Health Administration (29:15)',
        '349:10' => 'District of Columbia: District of Columbia Courts (349:10)',
        '349:30' => 'District of Columbia: District of Columbia General and Special Payments (349:30)',
        '525:0' => 'Election Assistance Commission: Election Assistance Commission (525:0)',
        '531:0' => 'Electric Reliability Organization: Electric Reliability Organization (531:0)',
        '20:0' => 'Environmental Protection Agency: Environmental Protection Agency (20:0)',
        '350:0' => 'Equal Employment Opportunity Commission: Equal Employment Opportunity Commission (350:0)',
        '100:20' => 'Executive Office of the President: Council of Economic Advisers (100:20)',
        '100:25' => 'Executive Office of the President: Council on Environmental Quality and Office of Environmental Quality (100:25)',
        '100:0' => 'Executive Office of the President: Executive Office of the President (100:0)',
        '100:10' => 'Executive Office of the President: Executive Residence at the White House (100:10)',
        '100:35' => 'Executive Office of the President: National Security Council and Homeland Security Council (100:35)',
        '100:50' => 'Executive Office of the President: Office of Administration (100:50)',
        '100:55' => 'Executive Office of the President: Office of Management and Budget (100:55)',
        '100:60' => 'Executive Office of the President: Office of National Drug Control Policy (100:60)',
        '100:65' => 'Executive Office of the President: Office of Science and Technology Policy (100:65)',
        '100:70' => 'Executive Office of the President: Office of the United States Trade Representative (100:70)',
        '100:15' => 'Executive Office of the President: Special Assistance to the President and the Official Residence of the Vice President (100:15)',
        '100:5' => 'Executive Office of the President: The White House (100:5)',
        '100:95' => 'Executive Office of the President: Unanticipated Needs (100:95)',
        '351:0' => 'Export-Import Bank of the United States: Export-Import Bank of the United States (351:0)',
        '352:0' => 'Farm Credit Administration: Farm Credit Administration (352:0)',
        '912:0' => 'Farm Credit System: Farm Credit System (912:0)',
        '355:0' => 'Farm Credit System Insurance Corporation: Farm Credit System Insurance Corporation (355:0)',
        '356:0' => 'Federal Communications Commission: Federal Communications Commission (356:0)',
        '357:20' => 'Federal Deposit Insurance Corporation: Deposit Insurance (357:20)',
        '357:40' => 'Federal Deposit Insurance Corporation: FDIC - Office of Inspector General (357:40)',
        '357:30' => 'Federal Deposit Insurance Corporation: FSLIC Resolution (357:30)',
        '357:35' => 'Federal Deposit Insurance Corporation: Orderly Liquidation (357:35)',
        '154:0' => 'Federal Drug Control Programs: Federal Drug Control Programs (154:0)',
        '360:0' => 'Federal Election Commission: Federal Election Commission (360:0)',
        '362:10' => 'Federal Financial Institutions Examination Council: Federal Financial Institutions Examination Council (362:10)',
        '362:20' => 'Federal Financial Institutions Examination Council: Federal Financial Institutions Examination Council Appraisal Subcommittee (362:20)',
        '913:0' => 'Federal Home Loan Bank System: Federal Home Loan Bank System (913:0)',
        '914:0' => 'Federal Home Loan Mortgage Corporation: Federal Home Loan Mortgage Corporation (914:0)',
        '537:0' => 'Federal Housing Finance Agency: Federal Housing Finance Agency (537:0)',
        '365:0' => 'Federal Labor Relations Authority: Federal Labor Relations Authority (365:0)',
        '366:0' => 'Federal Maritime Commission: Federal Maritime Commission (366:0)',
        '367:0' => 'Federal Mediation and Conciliation Service: Federal Mediation and Conciliation Service (367:0)',
        '368:0' => 'Federal Mine Safety and Health Review Commission: Federal Mine Safety and Health Review Commission (368:0)',
        '915:0' => 'Federal National Mortgage Association: Federal National Mortgage Association (915:0)',
        '369:0' => 'Federal Retirement Thrift Investment Board: Federal Retirement Thrift Investment Board (369:0)',
        '370:0' => 'Federal Trade Commission: Federal Trade Commission (370:0)',
        '920:0' => 'Financing Vehicles and the Board of Governors of the Federal Reserve: Financing Vehicles and the Board of Governors of the Federal Reserve (920:0)',
        '23:30' => 'General Services Administration: General Activities (23:30)',
        '23:0' => 'General Services Administration: General Services Administration (23:0)',
        '23:5' => 'General Services Administration: Real Property Activities (23:5)',
        '23:10' => 'General Services Administration: Supply and Technology Activities (23:10)',
        '586:0' => 'Gulf Coast Ecosystem Restoration Council: Gulf Coast Ecosystem Restoration Council (586:0)',
        '372:0' => 'Harry S Truman Scholarship Foundation: Harry S Truman Scholarship Foundation (372:0)',
        '578:0' => 'Independent Payment Advisory Board: Independent Payment Advisory Board (578:0)',
        '584:0' => 'Indian Law and Order Commission: Indian Law and Order Commission (584:0)',
        '373:0' => 'Institute of American Indian and Alaska Native Culture and Arts Development: Institute of American Indian and Alaska Native Culture and Arts Development (373:0)',
        '474:0' => 'Institute of Museum and Library Services: Institute of Museum and Library Services (474:0)',
        '467:0' => 'Intelligence Community Management Account: Intelligence Community Management Account (467:0)',
        '184:50' => 'International Assistance Programs: African Development Foundation (184:50)',
        '184:15' => 'International Assistance Programs: Agency for International Development (184:15)',
        '184:95' => 'International Assistance Programs: Foreign Assistance Program Allowances (184:95)',
        '184:40' => 'International Assistance Programs: Inter-American Foundation (184:40)',
        '184:0' => 'International Assistance Programs: International Assistance Programs (184:0)',
        '184:60' => 'International Assistance Programs: International Monetary Programs (184:60)',
        '184:5' => 'International Assistance Programs: International Security Assistance (184:5)',
        '184:70' => 'International Assistance Programs: Military Sales Program (184:70)',
        '184:3' => 'International Assistance Programs: Millennium Challenge Corporation (184:3)',
        '184:10' => 'International Assistance Programs: Multilateral Assistance (184:10)',
        '184:20' => 'International Assistance Programs: Overseas Private Investment Corporation (184:20)',
        '184:35' => 'International Assistance Programs: Peace Corps (184:35)',
        '184:75' => 'International Assistance Programs: Special Assistance Initiatives (184:75)',
        '184:25' => 'International Assistance Programs: Trade and Development Agency (184:25)',
        '378:0' => 'International Trade Commission: International Trade Commission (378:0)',
        '381:0' => 'James Madison Memorial Fellowship Foundation: James Madison Memorial Fellowship Foundation (381:0)',
        '382:0' => 'Japan-United States Friendship Commission: Japan-United States Friendship Commission (382:0)',
        '2:26' => 'Judicial Branch: Administrative Office of the United States Courts (2:26)',
        '2:25' => 'Judicial Branch: Courts of Appeals, District Courts, and other Judicial Services (2:25)',
        '2:30' => 'Judicial Branch: Federal Judicial Center (2:30)',
        '2:0' => 'Judicial Branch: Judicial Branch (2:0)',
        '2:35' => 'Judicial Branch: Judicial Retirement Funds (2:35)',
        '2:5' => 'Judicial Branch: Supreme Court of the United States (2:5)',
        '2:7' => 'Judicial Branch: United States Court of Appeals for the Federal Circuit (2:7)',
        '2:15' => 'Judicial Branch: United States Court of International Trade (2:15)',
        '2:39' => 'Judicial Branch: United States Sentencing Commission (2:39)',
        '385:0' => 'Legal Services Corporation: Legal Services Corporation (385:0)',
        '1:15' => 'Legislative Branch: Architect of the Capitol (1:15)',
        '1:18' => 'Legislative Branch: Botanic Garden (1:18)',
        '1:13' => 'Legislative Branch: Capitol Police (1:13)',
        '1:14' => 'Legislative Branch: Congressional Budget Office (1:14)',
        '1:35' => 'Legislative Branch: Government Accountability Office (1:35)',
        '1:30' => 'Legislative Branch: Government Printing Office (1:30)',
        '1:10' => 'Legislative Branch: House of Representatives (1:10)',
        '1:11' => 'Legislative Branch: Joint Items (1:11)',
        '1:45' => 'Legislative Branch: Legislative Branch Boards and Commissions (1:45)',
        '1:25' => 'Legislative Branch: Library of Congress (1:25)',
        '1:12' => 'Legislative Branch: Office of Compliance (1:12)',
        '1:5' => 'Legislative Branch: Senate (1:5)',
        '1:40' => 'Legislative Branch: United States Tax Court (1:40)',
        '387:0' => 'Marine Mammal Commission: Marine Mammal Commission (387:0)',
        '389:0' => 'Merit Systems Protection Board: Merit Systems Protection Board (389:0)',
        '479:0' => 'Military Compensation and Retirement Modernization Commission: Military Compensation and Retirement Modernization Commission (479:0)',
        '487:0' => 'Morris K. Udall and Stewart L. Udall Foundation: Morris K. Udall and Stewart L. Udall Foundation (487:0)',
        '26:0' => 'National Aeronautics and Space Administration: National Aeronautics and Space Administration (26:0)',
        '393:0' => 'National Archives and Records Administration: National Archives and Records Administration (393:0)',
        '394:0' => 'National Capital Planning Commission: National Capital Planning Commission (394:0)',
        '413:0' => 'National Council on Disability: National Council on Disability (413:0)',
        '415:0' => 'National Credit Union Administration: National Credit Union Administration (415:0)',
        '417:0' => 'National Endowment for the Arts: National Endowment for the Arts (417:0)',
        '418:0' => 'National Endowment for the Humanities: National Endowment for the Humanities (418:0)',
        '538:0' => 'National Infrastructure Bank: National Infrastructure Bank (538:0)',
        '420:0' => 'National Labor Relations Board: National Labor Relations Board (420:0)',
        '421:0' => 'National Mediation Board: National Mediation Board (421:0)',
        '575:0' => 'National Railroad Passenger Corporation Office of Inspector General: National Railroad Passenger Corporation Office of Inspector General (575:0)',
        '422:0' => 'National Science Foundation: National Science Foundation (422:0)',
        '424:0' => 'National Transportation Safety Board: National Transportation Safety Board (424:0)',
        '428:0' => 'Neighborhood Reinvestment Corporation: Neighborhood Reinvestment Corporation (428:0)',
        '573:0' => 'Northern Border Regional Commission: Northern Border Regional Commission (573:0)',
        '429:0' => 'Nuclear Regulatory Commission: Nuclear Regulatory Commission (429:0)',
        '431:0' => 'Nuclear Waste Technical Review Board: Nuclear Waste Technical Review Board (431:0)',
        '432:0' => 'Occupational Safety and Health Review Commission: Occupational Safety and Health Review Commission (432:0)',
        '434:0' => 'Office of Government Ethics: Office of Government Ethics (434:0)',
        '435:0' => 'Office of Navajo and Hopi Indian Relocation: Office of Navajo and Hopi Indian Relocation (435:0)',
        '27:0' => 'Office of Personnel Management: Office of Personnel Management (27:0)',
        '436:0' => 'Office of Special Counsel: Office of Special Counsel (436:0)',
        '534:0' => 'Office of the Federal Coordinator for Alaska Natural Gas Transportation Projects: Office of the Federal Coordinator for Alaska Natural Gas Transportation Projects (534:0)',
        '505:0' => 'Other Commissions and Boards: Other Commissions and Boards (505:0)',
        '200:15' => 'Other Defense Civil Programs: American Battle Monuments Commission (200:15)',
        '200:20' => 'Other Defense Civil Programs: Armed Forces Retirement Home (200:20)',
        '200:25' => 'Other Defense Civil Programs: Cemeterial Expenses (200:25)',
        '200:10' => 'Other Defense Civil Programs: Educational Benefits (200:10)',
        '200:30' => 'Other Defense Civil Programs: Forest and Wildlife Conservation, Military Reservations (200:30)',
        '200:5' => 'Other Defense Civil Programs: Military Retirement (200:5)',
        '200:0' => 'Other Defense Civil Programs: Other Defense Civil Programs (200:0)',
        '200:7' => 'Other Defense Civil Programs: Retiree Health Care (200:7)',
        '200:45' => 'Other Defense Civil Programs: Selective Service System (200:45)',
        '579:0' => 'Patient-Centered Outcomes Research Trust Fund: Patient-Centered Outcomes Research Trust Fund (579:0)',
        '440:0' => 'Postal Service: Postal Service (440:0)',
        '512:0' => 'Presidio Trust: Presidio Trust (512:0)',
        '535:0' => 'Privacy and Civil Liberties Oversight Board: Privacy and Civil Liberties Oversight Board (535:0)',
        '526:0' => 'Public Company Accounting Oversight Board: Public Company Accounting Oversight Board (526:0)',
        '587:0' => 'Public Defender Service for the District of Columbia: Public Defender Service for the District of Columbia (587:0)',
        '446:0' => 'Railroad Retirement Board: Railroad Retirement Board (446:0)',
        '539:0' => 'Recovery Act Accountability and Transparency Board: Recovery Act Accountability and Transparency Board (539:0)',
        '449:0' => 'Securities and Exchange Commission: Securities and Exchange Commission (449:0)',
        '576:0' => 'Securities Investor Protection Corporation: Securities Investor Protection Corporation (576:0)',
        '28:0' => 'Small Business Administration: Small Business Administration (28:0)',
        '452:0' => 'Smithsonian Institution: Smithsonian Institution (452:0)',
        '16:0' => 'Social Security Administration: Social Security Administration (16:0)',
        '527:0' => 'Standard Setting Body: Standard Setting Body (527:0)',
        '453:0' => 'State Justice Institute: State Justice Institute (453:0)',
        '455:0' => 'Tennessee Valley Authority: Tennessee Valley Authority (455:0)',
        '476:0' => 'United Mine Workers of America Benefit Funds: United Mine Workers of America Benefit Funds (476:0)',
        '345:0' => 'United States Court of Appeals for Veterans Claims: United States Court of Appeals for Veterans Claims (345:0)',
        '486:0' => 'United States Enrichment Corporation Fund: United States Enrichment Corporation Fund (486:0)',
        '456:0' => 'United States Holocaust Memorial Museum: United States Holocaust Memorial Museum (456:0)',
        '458:0' => 'United States Institute of Peace: United States Institute of Peace (458:0)',
        '376:0' => 'United States Interagency Council on Homelessness: United States Interagency Council on Homelessness (376:0)',
        '519:0' => 'Vietnam Education Foundation: Vietnam Education Foundation (519:0)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_opendata_conforms_to'
  $field_bases['field_opendata_conforms_to'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_conforms_to',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_data_dictionary'
  $field_bases['field_opendata_data_dictionary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_data_dictionary',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_data_quality'
  $field_bases['field_opendata_data_quality'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_data_quality',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'false',
        1 => 'true',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_opendata_datadictionary_ty'
  $field_bases['field_opendata_datadictionary_ty'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_datadictionary_ty',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'application/json' => 'application/json',
        'application/pdf' => 'application/pdf',
        'application/xml' => 'application/xml',
        'application/atom+xml' => 'application/atom+xml',
        'application/rdf+xml' => 'application/rdf+xml',
        'application/rss+xml' => 'application/rss+xml',
        'text/csv' => 'text/csv',
        'application/vnd.oasis.opendocument.spreadsheet' => 'application/vnd.oasis.opendocument.spreadsheet',
        'application/vnd.ms-excel' => 'application/vnd.ms-excel',
        'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet' => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
        'application/swagger+json' => 'application/swagger+json',
        'application/raml+yaml' => 'application/raml+yaml',
        'application/vnd.apiblueprint.ast' => 'application/vnd.apiblueprint.ast',
        'application/hal+json' => 'application/hal+json',
        'application/hal+xml' => 'application/hal+xml',
        'application/ld+json' => 'application/ld+json',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_opendata_description'
  $field_bases['field_opendata_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_description',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_opendata_distribution'
  $field_bases['field_opendata_distribution'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_distribution',
    'foreign keys' => array(),
    'indexes' => array(
      'access_url' => array(
        0 => 'access_url',
      ),
      'download_url' => array(
        0 => 'download_url',
      ),
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'opendata_distribution_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'opendata_distribution',
  );

  // Exported field_base: 'field_opendata_frequency'
  $field_bases['field_opendata_frequency'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_frequency',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'R/P1Y' => 'Annual',
        'R/P2Y' => 'Biennial',
        'R/P2M ' => 'Bimonthly',
        'R/P2W' => 'Biweekly',
        'R/PT1S' => 'Continuously updated',
        'R/P1D' => 'Daily',
        'R/P10Y' => 'Decennial',
        'R/P1M' => 'Monthly',
        'R/P4Y' => 'Quadrennial',
        'R/P3M' => 'Quarterly',
        'R/P6M' => 'Semiannual',
        'R/P0.5M' => 'Semimonthly',
        'R/P3.5D' => 'Semiweekly',
        'R/P0.33M' => 'Three times a month',
        'R/P0.33W' => 'Three times a week',
        'R/P4M' => 'Three times a year',
        'R/P3Y' => 'Triennial',
        'R/P1W' => 'Weekly',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_opendata_identifier'
  $field_bases['field_opendata_identifier'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_identifier',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 80,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_ispartof'
  $field_bases['field_opendata_ispartof'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_ispartof',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_keyword'
  $field_bases['field_opendata_keyword'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_keyword',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_opendata_landing_page'
  $field_bases['field_opendata_landing_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_landing_page',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_language'
  $field_bases['field_opendata_language'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_language',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 80,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_license'
  $field_bases['field_opendata_license'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_license',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 80,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_mbox'
  $field_bases['field_opendata_mbox'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_mbox',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_opendata_modified'
  $field_bases['field_opendata_modified'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_modified',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 10,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_person'
  $field_bases['field_opendata_person'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_person',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_primary_it_invest'
  $field_bases['field_opendata_primary_it_invest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_primary_it_invest',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_program_code'
  $field_bases['field_opendata_program_code'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_program_code',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 15,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_publisher'
  $field_bases['field_opendata_publisher'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_publisher',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_references'
  $field_bases['field_opendata_references'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_references',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_release_date'
  $field_bases['field_opendata_release_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_release_date',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 10,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_rights'
  $field_bases['field_opendata_rights'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_rights',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_spatial'
  $field_bases['field_opendata_spatial'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_spatial',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_suborganizationof'
  $field_bases['field_opendata_suborganizationof'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_suborganizationof',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_system_of_records'
  $field_bases['field_opendata_system_of_records'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_system_of_records',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_temporal'
  $field_bases['field_opendata_temporal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_temporal',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opendata_theme'
  $field_bases['field_opendata_theme'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opendata_theme',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 80,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
