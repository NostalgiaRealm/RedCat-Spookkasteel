/*
 * FUN_100010b0 at 100010b0
 * undefined FUN_100010b0(void)
 * Address ranges: 100010b0-1000110a;1000111d-1000112d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_100010b0(int param_1)

{
  undefined4 *puVar1;
  uint extraout_EDX;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10020130;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10001000();
  if (DAT_10021030 != 0) {
    if (param_1 == 0) {
      puVar1 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (param_1 == 1) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (param_1 == 2) {
      puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (param_1 == 3) {
      puVar1 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (param_1 == 4) {
      puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (param_1 == 5) {
      puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (param_1 == 6) {
      puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (param_1 == 7) {
      puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (param_1 == 9) {
      puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (param_1 == 10) {
      puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (param_1 == 0xb) {
      puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (param_1 == 0xd) {
      puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (param_1 == 0xf) {
      puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (param_1 == -0x7ffffffe) {
      puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (param_1 == -0x7ffffffd) {
      puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (param_1 == -0x7ffffffc) {
      puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar1 = (undefined4 *)cpuid(param_1);
    }
    ExceptionList = local_14;
    return CONCAT44(puVar1[2],*puVar1);
  }
  ExceptionList = local_14;
  return (ulonglong)extraout_EDX << 0x20;
}

