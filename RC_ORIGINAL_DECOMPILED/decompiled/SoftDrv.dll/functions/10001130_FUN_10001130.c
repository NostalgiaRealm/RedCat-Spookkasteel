/*
 * FUN_10001130 at 10001130
 * undefined FUN_10001130(void)
 * Address ranges: 10001130-1000118a;1000119d-100011ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001130(int param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10020140;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10001000();
  if (DAT_10021030 != 0) {
    if (param_1 == 0) {
      iVar1 = cpuid_basic_info(0);
    }
    else if (param_1 == 1) {
      iVar1 = cpuid_Version_info(1);
    }
    else if (param_1 == 2) {
      iVar1 = cpuid_cache_tlb_info(2);
    }
    else if (param_1 == 3) {
      iVar1 = cpuid_serial_info(3);
    }
    else if (param_1 == 4) {
      iVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (param_1 == 5) {
      iVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (param_1 == 6) {
      iVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (param_1 == 7) {
      iVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (param_1 == 9) {
      iVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (param_1 == 10) {
      iVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (param_1 == 0xb) {
      iVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (param_1 == 0xd) {
      iVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (param_1 == 0xf) {
      iVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (param_1 == -0x7ffffffe) {
      iVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (param_1 == -0x7ffffffd) {
      iVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (param_1 == -0x7ffffffc) {
      iVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
      iVar1 = cpuid(param_1);
    }
    ExceptionList = local_14;
    return *(undefined4 *)(iVar1 + 8);
  }
  ExceptionList = local_14;
  return 0;
}

