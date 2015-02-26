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
        '310:00' => 'Access Board: Access Board (310:00)',
        '302:00' => 'Administrative Conference of the United States: Administrative Conference of the United States (302:00)',
        '306:00' => 'Advisory Council on Historic Preservation: Advisory Council on Historic Preservation (306:00)',
        '530:00' => 'Affordable Housing Program: Affordable Housing Program (530:00)',
        '309:00' => 'Appalachian Regional Commission: Appalachian Regional Commission (309:00)',
        '313:00' => 'Barry Goldwater Scholarship and Excellence in Education Foundation: Barry Goldwater Scholarship and Excellence in Education Foundation (313:00)',
        '514:00' => 'Broadcasting Board of Governors: Broadcasting Board of Governors (514:00)',
        '581:00' => 'Bureau of Consumer Financial Protection: Bureau of Consumer Financial Protection (581:00)',
        '316:00' => 'Central Intelligence Agency: Central Intelligence Agency (316:00)',
        '510:00' => 'Chemical Safety and Hazard Investigation Board: Chemical Safety and Hazard Investigation Board (510:00)',
        '465:00' => 'Christopher Columbus Fellowship Foundation: Christopher Columbus Fellowship Foundation (465:00)',
        '582:00' => 'Civilian Property Realignment Board: Civilian Property Realignment Board (582:00)',
        '323:00' => 'Commission of Fine Arts: Commission of Fine Arts (323:00)',
        '326:00' => 'Commission on Civil Rights: Commission on Civil Rights (326:00)',
        '338:00' => 'Committee for Purchase from People who are Blind or Severely Disabled, activities: Committee for Purchase from People who are Blind or Severely Disabled, activities (338:00)',
        '339:00' => 'Commodity Futures Trading Commission: Commodity Futures Trading Commission (339:00)',
        '343:00' => 'Consumer Product Safety Commission: Consumer Product Safety Commission (343:00)',
        '485:00' => 'Corporation for National and Community Service: Corporation for National and Community Service (485:00)',
        '344:00' => 'Corporation for Public Broadcasting: Corporation for Public Broadcasting (344:00)',
        '580:00' => 'Corporation for Travel Promotion: Corporation for Travel Promotion (580:00)',
        '202:00' => 'Corps of Engineers - Civil Works: Corps of Engineers - Civil Works (202:00)',
        '542:00' => 'Council of the Inspectors General on Integrity and Efficiency: Council of the Inspectors General on Integrity and Efficiency (542:00)',
        '511:00' => 'Court Services and Offender Supervision Agency for the District of Columbia: Court Services and Offender Supervision Agency for the District of Columbia (511:00)',
        '347:00' => 'Defense Nuclear Facilities Safety Board: Defense Nuclear Facilities Safety Board (347:00)',
        '517:00' => 'Delta Regional Authority: Delta Regional Authority (517:00)',
        '513:00' => 'Denali Commission: Denali Commission (513:00)',
        '005:45' => 'Department of Agriculture: Agricultural Marketing Service (005:45)',
        '005:18' => 'Department of Agriculture: Agricultural Research Service (005:18)',
        '005:32' => 'Department of Agriculture: Animal and Plant Health Inspection Service (005:32)',
        '005:19' => 'Department of Agriculture: Buildings and Facilities (005:19)',
        '005:00' => 'Department of Agriculture: Department of Agriculture (005:00)',
        '005:13' => 'Department of Agriculture: Economic Research Service (005:13)',
        '005:04' => 'Department of Agriculture: Executive Operations (005:04)',
        '005:49' => 'Department of Agriculture: Farm Service Agency (005:49)',
        '005:84' => 'Department of Agriculture: Food and Nutrition Service (005:84)',
        '005:35' => 'Department of Agriculture: Food Safety and Inspection Service (005:35)',
        '005:68' => 'Department of Agriculture: Foreign Agricultural Service (005:68)',
        '005:96' => 'Department of Agriculture: Forest Service (005:96)',
        '005:37' => 'Department of Agriculture: Grain Inspection, Packers and Stockyards Administration (005:37)',
        '005:16' => 'Department of Agriculture: Hazardous Materials Management (005:16)',
        '005:15' => 'Department of Agriculture: National Agricultural Statistics Service (005:15)',
        '005:20' => 'Department of Agriculture: National Institute of Food and Agriculture (005:20)',
        '005:53' => 'Department of Agriculture: Natural Resources Conservation Service (005:53)',
        '005:14' => 'Department of Agriculture: Office of Chief Financial Officer (005:14)',
        '005:12' => 'Department of Agriculture: Office of Chief Information Officer (005:12)',
        '005:07' => 'Department of Agriculture: Office of Civil Rights (005:07)',
        '005:08' => 'Department of Agriculture: Office of Inspector General (005:08)',
        '005:10' => 'Department of Agriculture: Office of the General Counsel (005:10)',
        '005:03' => 'Department of Agriculture: Office of the Secretary (005:03)',
        '005:47' => 'Department of Agriculture: Risk Management Agency (005:47)',
        '005:65' => 'Department of Agriculture: Rural Business - Cooperative Service (005:65)',
        '005:55' => 'Department of Agriculture: Rural Development (005:55)',
        '005:63' => 'Department of Agriculture: Rural Housing Service (005:63)',
        '005:60' => 'Department of Agriculture: Rural Utilities Service (005:60)',
        '006:30' => 'Department of Commerce: Bureau of Industry and Security (006:30)',
        '006:07' => 'Department of Commerce: Bureau of the Census (006:07)',
        '006:00' => 'Department of Commerce: Department of Commerce (006:00)',
        '006:05' => 'Department of Commerce: Departmental Management (006:05)',
        '006:06' => 'Department of Commerce: Economic Development Administration (006:06)',
        '006:08' => 'Department of Commerce: Economics and Statistics Administration (006:08)',
        '006:25' => 'Department of Commerce: International Trade and Investment Administration (006:25)',
        '006:40' => 'Department of Commerce: Minority Business Development Agency (006:40)',
        '006:55' => 'Department of Commerce: National Institute of Standards and Technology (006:55)',
        '006:48' => 'Department of Commerce: National Oceanic and Atmospheric Administration (006:48)',
        '006:54' => 'Department of Commerce: National Technical Information Service (006:54)',
        '006:60' => 'Department of Commerce: National Telecommunications and Information Administration (006:60)',
        '006:51' => 'Department of Commerce: U.S. Patent and Trademark Office (006:51)',
        '007:57' => 'Department of Defense - Military Programs: Air Force (007:57)',
        '007:45' => 'Department of Defense - Military Programs: Allowances (007:45)',
        '007:21' => 'Department of Defense - Military Programs: Army (007:21)',
        '007:97' => 'Department of Defense - Military Programs: Defense-wide (007:97)',
        '007:00' => 'Department of Defense - Military Programs: Department of Defense - Military Programs (007:00)',
        '007:30' => 'Department of Defense - Military Programs: Family Housing (007:30)',
        '007:12' => 'Department of Defense - Military Programs: International Reconstruction and Other Assistance (007:12)',
        '007:25' => 'Department of Defense - Military Programs: Military Construction (007:25)',
        '007:05' => 'Department of Defense - Military Programs: Military Personnel (007:05)',
        '007:17' => 'Department of Defense - Military Programs: Navy, Marine Corps (007:17)',
        '007:10' => 'Department of Defense - Military Programs: Operation and Maintenance (007:10)',
        '007:15' => 'Department of Defense - Military Programs: Procurement (007:15)',
        '007:20' => 'Department of Defense - Military Programs: Research, Development, Test, and Evaluation (007:20)',
        '007:40' => 'Department of Defense - Military Programs: Revolving and Management Funds (007:40)',
        '007:55' => 'Department of Defense - Military Programs: Trust Funds (007:55)',
        '018:00' => 'Department of Education: Department of Education (018:00)',
        '018:80' => 'Department of Education: Departmental Management (018:80)',
        '018:85' => 'Department of Education: Hurricane Education Recovery (018:85)',
        '018:50' => 'Department of Education: Institute of Education Sciences (018:50)',
        '018:10' => 'Department of Education: Office of Elementary and Secondary Education (018:10)',
        '018:15' => 'Department of Education: Office of English Language Acquisition (018:15)',
        '018:45' => 'Department of Education: Office of Federal Student Aid (018:45)',
        '018:12' => 'Department of Education: Office of Innovation and Improvement (018:12)',
        '018:40' => 'Department of Education: Office of Postsecondary Education (018:40)',
        '018:20' => 'Department of Education: Office of Special Education and Rehabilitative Services (018:20)',
        '018:30' => 'Department of Education: Office of Vocational and Adult Education (018:30)',
        '019:00' => 'Department of Energy: Department of Energy (019:00)',
        '019:60' => 'Department of Energy: Departmental Administration (019:60)',
        '019:20' => 'Department of Energy: Energy Programs (019:20)',
        '019:10' => 'Department of Energy: Environmental and Other Defense Activities (019:10)',
        '019:05' => 'Department of Energy: National Nuclear Security Administration (019:05)',
        '019:50' => 'Department of Energy: Power Marketing Administration (019:50)',
        '009:70' => 'Department of Health and Human Services: Administration for Children and Families (009:70)',
        '009:75' => 'Department of Health and Human Services: Administration for Community Living (009:75)',
        '009:33' => 'Department of Health and Human Services: Agency for Healthcare Research and Quality (009:33)',
        '009:20' => 'Department of Health and Human Services: Centers for Disease Control and Prevention (009:20)',
        '009:38' => 'Department of Health and Human Services: Centers for Medicare and Medicaid Services (009:38)',
        '009:00' => 'Department of Health and Human Services: Department of Health and Human Services (009:00)',
        '009:90' => 'Department of Health and Human Services: Departmental Management (009:90)',
        '009:10' => 'Department of Health and Human Services: Food and Drug Administration (009:10)',
        '009:15' => 'Department of Health and Human Services: Health Resources and Services Administration (009:15)',
        '009:17' => 'Department of Health and Human Services: Indian Health Service (009:17)',
        '009:25' => 'Department of Health and Human Services: National Institutes of Health (009:25)',
        '009:92' => 'Department of Health and Human Services: Office of the Inspector General (009:92)',
        '009:91' => 'Department of Health and Human Services: Program Support Center (009:91)',
        '009:30' => 'Department of Health and Human Services: Substance Abuse and Mental Health Services Administration (009:30)',
        '024:30' => 'Department of Homeland Security: Citizenship and Immigration Services (024:30)',
        '024:00' => 'Department of Homeland Security: Department of Homeland Security (024:00)',
        '024:10' => 'Department of Homeland Security: Departmental Management and Operations (024:10)',
        '024:85' => 'Department of Homeland Security: Domestic Nuclear Detection Office (024:85)',
        '024:70' => 'Department of Homeland Security: Federal Emergency Management Agency (024:70)',
        '024:49' => 'Department of Homeland Security: Federal Law Enforcement Training Center (024:49)',
        '024:55' => 'Department of Homeland Security: Immigration and Customs Enforcement (024:55)',
        '024:65' => 'Department of Homeland Security: National Protection and Programs Directorate (024:65)',
        '024:20' => 'Department of Homeland Security: Office of the Inspector General (024:20)',
        '024:80' => 'Department of Homeland Security: Science and Technology (024:80)',
        '024:45' => 'Department of Homeland Security: Transportation Security Administration (024:45)',
        '024:58' => 'Department of Homeland Security: U.S. Customs and Border Protection (024:58)',
        '024:60' => 'Department of Homeland Security: United States Coast Guard (024:60)',
        '024:40' => 'Department of Homeland Security: United States Secret Service (024:40)',
        '025:06' => 'Department of Housing and Urban Development: Community Planning and Development (025:06)',
        '025:00' => 'Department of Housing and Urban Development: Department of Housing and Urban Development (025:00)',
        '025:29' => 'Department of Housing and Urban Development: Fair Housing and Equal Opportunity (025:29)',
        '025:12' => 'Department of Housing and Urban Development: Government National Mortgage Association (025:12)',
        '025:09' => 'Department of Housing and Urban Development: Housing Programs (025:09)',
        '025:35' => 'Department of Housing and Urban Development: Management and Administration (025:35)',
        '025:32' => 'Department of Housing and Urban Development: Office of Lead Hazard Control and Healthy Homes (025:32)',
        '025:33' => 'Department of Housing and Urban Development: Office of Sustainable Housing and Communities (025:33)',
        '025:28' => 'Department of Housing and Urban Development: Policy Development and Research (025:28)',
        '025:03' => 'Department of Housing and Urban Development: Public and Indian Housing Programs (025:03)',
        '011:14' => 'Department of Justice: Bureau of Alcohol, Tobacco, Firearms, and Explosives (011:14)',
        '011:00' => 'Department of Justice: Department of Justice (011:00)',
        '011:12' => 'Department of Justice: Drug Enforcement Administration (011:12)',
        '011:10' => 'Department of Justice: Federal Bureau of Investigation (011:10)',
        '011:20' => 'Department of Justice: Federal Prison System (011:20)',
        '011:03' => 'Department of Justice: General Administration (011:03)',
        '011:07' => 'Department of Justice: Interagency Law Enforcement (011:07)',
        '011:05' => 'Department of Justice: Legal Activities and U.S. Marshals (011:05)',
        '011:08' => 'Department of Justice: National Security Division (011:08)',
        '011:21' => 'Department of Justice: Office of Justice Programs (011:21)',
        '011:06' => 'Department of Justice: Radiation Exposure Compensation (011:06)',
        '011:04' => 'Department of Justice: United States Parole Commission (011:04)',
        '011:30' => 'Department of Justice: Violent Crime Reduction Trust Fund (011:30)',
        '012:20' => 'Department of Labor: Bureau of Labor Statistics (012:20)',
        '012:00' => 'Department of Labor: Department of Labor (012:00)',
        '012:25' => 'Department of Labor: Departmental Management (012:25)',
        '012:11' => 'Department of Labor: Employee Benefits Security Administration (012:11)',
        '012:05' => 'Department of Labor: Employment and Training Administration (012:05)',
        '012:17' => 'Department of Labor: Employment Standards Administration (012:17)',
        '012:19' => 'Department of Labor: Mine Safety and Health Administration (012:19)',
        '012:18' => 'Department of Labor: Occupational Safety and Health Administration (012:18)',
        '012:22' => 'Department of Labor: Office of Federal Contract Compliance Programs (012:22)',
        '012:23' => 'Department of Labor: Office of Labor Management Standards (012:23)',
        '012:15' => 'Department of Labor: Office of Workers\' Compensation Programs (012:15)',
        '012:12' => 'Department of Labor: Pension Benefit Guaranty Corporation (012:12)',
        '012:16' => 'Department of Labor: Wage and Hour Division (012:16)',
        '014:05' => 'Department of State: Administration of Foreign Affairs (014:05)',
        '014:00' => 'Department of State: Department of State (014:00)',
        '014:15' => 'Department of State: International Commissions (014:15)',
        '014:10' => 'Department of State: International Organizations and Conferences (014:10)',
        '014:25' => 'Department of State: Other (014:25)',
        '010:76' => 'Department of the Interior: Bureau of Indian Affairs and Bureau of Indian Education (010:76)',
        '010:04' => 'Department of the Interior: Bureau of Land Management (010:04)',
        '010:06' => 'Department of the Interior: Bureau of Ocean Energy Management (010:06)',
        '010:10' => 'Department of the Interior: Bureau of Reclamation (010:10)',
        '010:22' => 'Department of the Interior: Bureau of Safety and Environmental Enforcement (010:22)',
        '010:11' => 'Department of the Interior: Central Utah Project (010:11)',
        '010:00' => 'Department of the Interior: Department of the Interior (010:00)',
        '010:95' => 'Department of the Interior: Department-Wide Programs (010:95)',
        '010:84' => 'Department of the Interior: Departmental Offices (010:84)',
        '010:85' => 'Department of the Interior: Insular Affairs (010:85)',
        '010:92' => 'Department of the Interior: National Indian Gaming Commission (010:92)',
        '010:24' => 'Department of the Interior: National Park Service (010:24)',
        '010:88' => 'Department of the Interior: Office of Inspector General (010:88)',
        '010:08' => 'Department of the Interior: Office of Surface Mining Reclamation and Enforcement (010:08)',
        '010:86' => 'Department of the Interior: Office of the Solicitor (010:86)',
        '010:90' => 'Department of the Interior: Office of the Special Trustee for American Indians (010:90)',
        '010:18' => 'Department of the Interior: United States Fish and Wildlife Service (010:18)',
        '010:12' => 'Department of the Interior: United States Geological Survey (010:12)',
        '015:13' => 'Department of the Treasury: Alcohol and Tobacco Tax and Trade Bureau (015:13)',
        '015:20' => 'Department of the Treasury: Bureau of Engraving and Printing (015:20)',
        '015:57' => 'Department of the Treasury: Comptroller of the Currency (015:57)',
        '015:00' => 'Department of the Treasury: Department of the Treasury (015:00)',
        '015:05' => 'Department of the Treasury: Departmental Offices (015:05)',
        '015:11' => 'Department of the Treasury: Federal Financing Bank (015:11)',
        '015:04' => 'Department of the Treasury: Financial Crimes Enforcement Network (015:04)',
        '015:12' => 'Department of the Treasury: Fiscal Service (015:12)',
        '015:60' => 'Department of the Treasury: Interest on the Public Debt (015:60)',
        '015:45' => 'Department of the Treasury: Internal Revenue Service (015:45)',
        '015:25' => 'Department of the Treasury: United States Mint (015:25)',
        '021:00' => 'Department of Transportation: Department of Transportation (021:00)',
        '021:12' => 'Department of Transportation: Federal Aviation Administration (021:12)',
        '021:15' => 'Department of Transportation: Federal Highway Administration (021:15)',
        '021:17' => 'Department of Transportation: Federal Motor Carrier Safety Administration (021:17)',
        '021:27' => 'Department of Transportation: Federal Railroad Administration (021:27)',
        '021:36' => 'Department of Transportation: Federal Transit Administration (021:36)',
        '021:70' => 'Department of Transportation: Maritime Administration (021:70)',
        '021:18' => 'Department of Transportation: National Highway Traffic Safety Administration (021:18)',
        '021:56' => 'Department of Transportation: Office of Inspector General (021:56)',
        '021:04' => 'Department of Transportation: Office of the Secretary (021:04)',
        '021:50' => 'Department of Transportation: Pipeline and Hazardous Materials Safety Administration (021:50)',
        '021:40' => 'Department of Transportation: Saint Lawrence Seaway Development Corporation (021:40)',
        '021:61' => 'Department of Transportation: Surface Transportation Board (021:61)',
        '029:25' => 'Department of Veterans Affairs: Benefits Programs (029:25)',
        '029:00' => 'Department of Veterans Affairs: Department of Veterans Affairs (029:00)',
        '029:40' => 'Department of Veterans Affairs: Departmental Administration (029:40)',
        '029:15' => 'Department of Veterans Affairs: Veterans Health Administration (029:15)',
        '349:10' => 'District of Columbia: District of Columbia Courts (349:10)',
        '349:30' => 'District of Columbia: District of Columbia General and Special Payments (349:30)',
        '525:00' => 'Election Assistance Commission: Election Assistance Commission (525:00)',
        '531:00' => 'Electric Reliability Organization: Electric Reliability Organization (531:00)',
        '020:00' => 'Environmental Protection Agency: Environmental Protection Agency (020:00)',
        '350:00' => 'Equal Employment Opportunity Commission: Equal Employment Opportunity Commission (350:00)',
        '100:20' => 'Executive Office of the President: Council of Economic Advisers (100:20)',
        '100:25' => 'Executive Office of the President: Council on Environmental Quality and Office of Environmental Quality (100:25)',
        '100:00' => 'Executive Office of the President: Executive Office of the President (100:00)',
        '100:10' => 'Executive Office of the President: Executive Residence at the White House (100:10)',
        '100:35' => 'Executive Office of the President: National Security Council and Homeland Security Council (100:35)',
        '100:50' => 'Executive Office of the President: Office of Administration (100:50)',
        '100:55' => 'Executive Office of the President: Office of Management and Budget (100:55)',
        '100:60' => 'Executive Office of the President: Office of National Drug Control Policy (100:60)',
        '100:65' => 'Executive Office of the President: Office of Science and Technology Policy (100:65)',
        '100:70' => 'Executive Office of the President: Office of the United States Trade Representative (100:70)',
        '100:15' => 'Executive Office of the President: Special Assistance to the President and the Official Residence of the Vice President (100:15)',
        '100:05' => 'Executive Office of the President: The White House (100:05)',
        '100:95' => 'Executive Office of the President: Unanticipated Needs (100:95)',
        '351:00' => 'Export-Import Bank of the United States: Export-Import Bank of the United States (351:00)',
        '352:00' => 'Farm Credit Administration: Farm Credit Administration (352:00)',
        '912:00' => 'Farm Credit System: Farm Credit System (912:00)',
        '355:00' => 'Farm Credit System Insurance Corporation: Farm Credit System Insurance Corporation (355:00)',
        '356:00' => 'Federal Communications Commission: Federal Communications Commission (356:00)',
        '357:20' => 'Federal Deposit Insurance Corporation: Deposit Insurance (357:20)',
        '357:40' => 'Federal Deposit Insurance Corporation: FDIC - Office of Inspector General (357:40)',
        '357:30' => 'Federal Deposit Insurance Corporation: FSLIC Resolution (357:30)',
        '357:35' => 'Federal Deposit Insurance Corporation: Orderly Liquidation (357:35)',
        '154:00' => 'Federal Drug Control Programs: Federal Drug Control Programs (154:00)',
        '360:00' => 'Federal Election Commission: Federal Election Commission (360:00)',
        '362:10' => 'Federal Financial Institutions Examination Council: Federal Financial Institutions Examination Council (362:10)',
        '362:20' => 'Federal Financial Institutions Examination Council: Federal Financial Institutions Examination Council Appraisal Subcommittee (362:20)',
        '913:00' => 'Federal Home Loan Bank System: Federal Home Loan Bank System (913:00)',
        '914:00' => 'Federal Home Loan Mortgage Corporation: Federal Home Loan Mortgage Corporation (914:00)',
        '537:00' => 'Federal Housing Finance Agency: Federal Housing Finance Agency (537:00)',
        '365:00' => 'Federal Labor Relations Authority: Federal Labor Relations Authority (365:00)',
        '366:00' => 'Federal Maritime Commission: Federal Maritime Commission (366:00)',
        '367:00' => 'Federal Mediation and Conciliation Service: Federal Mediation and Conciliation Service (367:00)',
        '368:00' => 'Federal Mine Safety and Health Review Commission: Federal Mine Safety and Health Review Commission (368:00)',
        '915:00' => 'Federal National Mortgage Association: Federal National Mortgage Association (915:00)',
        '369:00' => 'Federal Retirement Thrift Investment Board: Federal Retirement Thrift Investment Board (369:00)',
        '370:00' => 'Federal Trade Commission: Federal Trade Commission (370:00)',
        '920:00' => 'Financing Vehicles and the Board of Governors of the Federal Reserve: Financing Vehicles and the Board of Governors of the Federal Reserve (920:00)',
        '023:30' => 'General Services Administration: General Activities (023:30)',
        '023:00' => 'General Services Administration: General Services Administration (023:00)',
        '023:05' => 'General Services Administration: Real Property Activities (023:05)',
        '023:10' => 'General Services Administration: Supply and Technology Activities (023:10)',
        '586:00' => 'Gulf Coast Ecosystem Restoration Council: Gulf Coast Ecosystem Restoration Council (586:00)',
        '372:00' => 'Harry S Truman Scholarship Foundation: Harry S Truman Scholarship Foundation (372:00)',
        '578:00' => 'Independent Payment Advisory Board: Independent Payment Advisory Board (578:00)',
        '584:00' => 'Indian Law and Order Commission: Indian Law and Order Commission (584:00)',
        '373:00' => 'Institute of American Indian and Alaska Native Culture and Arts Development: Institute of American Indian and Alaska Native Culture and Arts Development (373:00)',
        '474:00' => 'Institute of Museum and Library Services: Institute of Museum and Library Services (474:00)',
        '467:00' => 'Intelligence Community Management Account: Intelligence Community Management Account (467:00)',
        '184:50' => 'International Assistance Programs: African Development Foundation (184:50)',
        '184:15' => 'International Assistance Programs: Agency for International Development (184:15)',
        '184:95' => 'International Assistance Programs: Foreign Assistance Program Allowances (184:95)',
        '184:40' => 'International Assistance Programs: Inter-American Foundation (184:40)',
        '184:00' => 'International Assistance Programs: International Assistance Programs (184:00)',
        '184:60' => 'International Assistance Programs: International Monetary Programs (184:60)',
        '184:05' => 'International Assistance Programs: International Security Assistance (184:05)',
        '184:70' => 'International Assistance Programs: Military Sales Program (184:70)',
        '184:03' => 'International Assistance Programs: Millennium Challenge Corporation (184:03)',
        '184:10' => 'International Assistance Programs: Multilateral Assistance (184:10)',
        '184:20' => 'International Assistance Programs: Overseas Private Investment Corporation (184:20)',
        '184:35' => 'International Assistance Programs: Peace Corps (184:35)',
        '184:75' => 'International Assistance Programs: Special Assistance Initiatives (184:75)',
        '184:25' => 'International Assistance Programs: Trade and Development Agency (184:25)',
        '378:00' => 'International Trade Commission: International Trade Commission (378:00)',
        '381:00' => 'James Madison Memorial Fellowship Foundation: James Madison Memorial Fellowship Foundation (381:00)',
        '382:00' => 'Japan-United States Friendship Commission: Japan-United States Friendship Commission (382:00)',
        '002:26' => 'Judicial Branch: Administrative Office of the United States Courts (002:26)',
        '002:25' => 'Judicial Branch: Courts of Appeals, District Courts, and other Judicial Services (002:25)',
        '002:30' => 'Judicial Branch: Federal Judicial Center (002:30)',
        '002:00' => 'Judicial Branch: Judicial Branch (002:00)',
        '002:35' => 'Judicial Branch: Judicial Retirement Funds (002:35)',
        '002:05' => 'Judicial Branch: Supreme Court of the United States (002:05)',
        '002:07' => 'Judicial Branch: United States Court of Appeals for the Federal Circuit (002:07)',
        '002:15' => 'Judicial Branch: United States Court of International Trade (002:15)',
        '002:39' => 'Judicial Branch: United States Sentencing Commission (002:39)',
        '385:00' => 'Legal Services Corporation: Legal Services Corporation (385:00)',
        '001:15' => 'Legislative Branch: Architect of the Capitol (001:15)',
        '001:18' => 'Legislative Branch: Botanic Garden (001:18)',
        '001:13' => 'Legislative Branch: Capitol Police (001:13)',
        '001:14' => 'Legislative Branch: Congressional Budget Office (001:14)',
        '001:35' => 'Legislative Branch: Government Accountability Office (001:35)',
        '001:30' => 'Legislative Branch: Government Printing Office (001:30)',
        '001:10' => 'Legislative Branch: House of Representatives (001:10)',
        '001:11' => 'Legislative Branch: Joint Items (001:11)',
        '001:45' => 'Legislative Branch: Legislative Branch Boards and Commissions (001:45)',
        '001:25' => 'Legislative Branch: Library of Congress (001:25)',
        '001:12' => 'Legislative Branch: Office of Compliance (001:12)',
        '001:05' => 'Legislative Branch: Senate (001:05)',
        '001:40' => 'Legislative Branch: United States Tax Court (001:40)',
        '387:00' => 'Marine Mammal Commission: Marine Mammal Commission (387:00)',
        '389:00' => 'Merit Systems Protection Board: Merit Systems Protection Board (389:00)',
        '479:00' => 'Military Compensation and Retirement Modernization Commission: Military Compensation and Retirement Modernization Commission (479:00)',
        '487:00' => 'Morris K. Udall and Stewart L. Udall Foundation: Morris K. Udall and Stewart L. Udall Foundation (487:00)',
        '026:00' => 'National Aeronautics and Space Administration: National Aeronautics and Space Administration (026:00)',
        '393:00' => 'National Archives and Records Administration: National Archives and Records Administration (393:00)',
        '394:00' => 'National Capital Planning Commission: National Capital Planning Commission (394:00)',
        '413:00' => 'National Council on Disability: National Council on Disability (413:00)',
        '415:00' => 'National Credit Union Administration: National Credit Union Administration (415:00)',
        '417:00' => 'National Endowment for the Arts: National Endowment for the Arts (417:00)',
        '418:00' => 'National Endowment for the Humanities: National Endowment for the Humanities (418:00)',
        '538:00' => 'National Infrastructure Bank: National Infrastructure Bank (538:00)',
        '420:00' => 'National Labor Relations Board: National Labor Relations Board (420:00)',
        '421:00' => 'National Mediation Board: National Mediation Board (421:00)',
        '575:00' => 'National Railroad Passenger Corporation Office of Inspector General: National Railroad Passenger Corporation Office of Inspector General (575:00)',
        '422:00' => 'National Science Foundation: National Science Foundation (422:00)',
        '424:00' => 'National Transportation Safety Board: National Transportation Safety Board (424:00)',
        '428:00' => 'Neighborhood Reinvestment Corporation: Neighborhood Reinvestment Corporation (428:00)',
        '573:00' => 'Northern Border Regional Commission: Northern Border Regional Commission (573:00)',
        '429:00' => 'Nuclear Regulatory Commission: Nuclear Regulatory Commission (429:00)',
        '431:00' => 'Nuclear Waste Technical Review Board: Nuclear Waste Technical Review Board (431:00)',
        '432:00' => 'Occupational Safety and Health Review Commission: Occupational Safety and Health Review Commission (432:00)',
        '434:00' => 'Office of Government Ethics: Office of Government Ethics (434:00)',
        '435:00' => 'Office of Navajo and Hopi Indian Relocation: Office of Navajo and Hopi Indian Relocation (435:00)',
        '027:00' => 'Office of Personnel Management: Office of Personnel Management (027:00)',
        '436:00' => 'Office of Special Counsel: Office of Special Counsel (436:00)',
        '534:00' => 'Office of the Federal Coordinator for Alaska Natural Gas Transportation Projects: Office of the Federal Coordinator for Alaska Natural Gas Transportation Projects (534:00)',
        '505:00' => 'Other Commissions and Boards: Other Commissions and Boards (505:00)',
        '200:15' => 'Other Defense Civil Programs: American Battle Monuments Commission (200:15)',
        '200:20' => 'Other Defense Civil Programs: Armed Forces Retirement Home (200:20)',
        '200:25' => 'Other Defense Civil Programs: Cemeterial Expenses (200:25)',
        '200:10' => 'Other Defense Civil Programs: Educational Benefits (200:10)',
        '200:30' => 'Other Defense Civil Programs: Forest and Wildlife Conservation, Military Reservations (200:30)',
        '200:05' => 'Other Defense Civil Programs: Military Retirement (200:05)',
        '200:00' => 'Other Defense Civil Programs: Other Defense Civil Programs (200:00)',
        '200:07' => 'Other Defense Civil Programs: Retiree Health Care (200:07)',
        '200:45' => 'Other Defense Civil Programs: Selective Service System (200:45)',
        '579:00' => 'Patient-Centered Outcomes Research Trust Fund: Patient-Centered Outcomes Research Trust Fund (579:00)',
        '440:00' => 'Postal Service: Postal Service (440:00)',
        '512:00' => 'Presidio Trust: Presidio Trust (512:00)',
        '535:00' => 'Privacy and Civil Liberties Oversight Board: Privacy and Civil Liberties Oversight Board (535:00)',
        '526:00' => 'Public Company Accounting Oversight Board: Public Company Accounting Oversight Board (526:00)',
        '587:00' => 'Public Defender Service for the District of Columbia: Public Defender Service for the District of Columbia (587:00)',
        '446:00' => 'Railroad Retirement Board: Railroad Retirement Board (446:00)',
        '539:00' => 'Recovery Act Accountability and Transparency Board: Recovery Act Accountability and Transparency Board (539:00)',
        '449:00' => 'Securities and Exchange Commission: Securities and Exchange Commission (449:00)',
        '576:00' => 'Securities Investor Protection Corporation: Securities Investor Protection Corporation (576:00)',
        '028:00' => 'Small Business Administration: Small Business Administration (028:00)',
        '452:00' => 'Smithsonian Institution: Smithsonian Institution (452:00)',
        '016:00' => 'Social Security Administration: Social Security Administration (016:00)',
        '527:00' => 'Standard Setting Body: Standard Setting Body (527:00)',
        '453:00' => 'State Justice Institute: State Justice Institute (453:00)',
        '455:00' => 'Tennessee Valley Authority: Tennessee Valley Authority (455:00)',
        '476:00' => 'United Mine Workers of America Benefit Funds: United Mine Workers of America Benefit Funds (476:00)',
        '345:00' => 'United States Court of Appeals for Veterans Claims: United States Court of Appeals for Veterans Claims (345:00)',
        '486:00' => 'United States Enrichment Corporation Fund: United States Enrichment Corporation Fund (486:00)',
        '456:00' => 'United States Holocaust Memorial Museum: United States Holocaust Memorial Museum (456:00)',
        '458:00' => 'United States Institute of Peace: United States Institute of Peace (458:00)',
        '376:00' => 'United States Interagency Council on Homelessness: United States Interagency Council on Homelessness (376:00)',
        '519:00' => 'Vietnam Education Foundation: Vietnam Education Foundation (519:00)',
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
