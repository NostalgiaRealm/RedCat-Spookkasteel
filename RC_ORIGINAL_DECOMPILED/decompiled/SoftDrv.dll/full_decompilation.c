/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
/*
 * FUN_10001000 at 10001000
 * undefined FUN_10001000(void)
 * Address ranges: 10001000-10001041
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Removing unreachable block (ram,0x10001029) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_10001000(undefined4 param_1,uint param_2)

{
  int iVar1;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar2;
  
  DAT_10021030 = 0;
  _DAT_10021034 = 0;
  uVar2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  if ((uVar2 ^ 0x200000) != uVar2) {
    DAT_10021030 = 1;
    iVar1 = cpuid_Version_info(1);
    if ((*(uint *)(iVar1 + 8) & 0x10) != 0) {
      _DAT_10021034 = 1;
    }
  }
  return (ulonglong)param_2 << 0x20;
}


/*
 * FUN_10001050 at 10001050
 * undefined FUN_10001050(void)
 * Address ranges: 10001050-100010aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001050(void)

{
  int iVar1;
  uint uVar2;
  char local_10 [16];
  
  FUN_100011b0(0,local_10);
  iVar1 = _strncmp(local_10,s_AuthenticAMD_10021038,0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_100010b0(0x80000000);
    if (iVar1 != 0) {
      uVar2 = FUN_10001130(0x80000001);
      if ((uVar2 & 0x800000) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


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


/*
 * FUN_100011b0 at 100011b0
 * undefined FUN_100011b0(void)
 * Address ranges: 100011b0-10001215;10001228-10001238
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100011b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10020150;
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
    uVar2 = *puVar1;
    uVar4 = puVar1[2];
    uVar3 = puVar1[3];
    *param_2 = puVar1[1];
    param_2[1] = uVar4;
    param_2[2] = uVar3;
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}


/*
 * FUN_10001240 at 10001240
 * undefined FUN_10001240(void)
 * Address ranges: 10001240-100012b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001240(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_10 [16];
  
  FUN_100011b0(0,local_10);
  iVar1 = _strncmp(local_10,s_AuthenticAMD_10021038,0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_100010b0(0x80000000);
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0x80000001;
  }
  else {
    iVar1 = _strncmp(local_10,s_GenuineIntel_10021048,0xc);
    if (iVar1 != 0) {
      return 0;
    }
    uVar3 = 1;
  }
  uVar2 = FUN_10001130(uVar3);
  if ((uVar2 & 0x800000) == 0) {
    return 0;
  }
  return 1;
}


/*
 * FUN_100012c0 at 100012c0
 * undefined FUN_100012c0(void)
 * Address ranges: 100012c0-100012e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100012c0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  *param_3 = *(undefined4 *)(param_1 + 0x18);
  *param_4 = *(undefined4 *)(param_1 + 0x1c);
  *param_5 = *(undefined4 *)(param_1 + 0x20);
  return;
}


/*
 * FUN_100012f0 at 100012f0
 * undefined FUN_100012f0(void)
 * Address ranges: 100012f0-1000134c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100012f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x28) == 1) {
    FUN_100014d0(iVar1);
  }
  if ((*(byte *)(iVar1 + 0x20) & 0x40) == 0) {
    piVar2 = *(int **)(iVar1 + 0xc);
    if (piVar2 == (int *)0x0) goto LAB_10001321;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
LAB_10001321:
  piVar2 = *(int **)(iVar1 + 8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  FUN_10001350(iVar1);
  FUN_10018dc8(iVar1);
  *param_1 = 0;
  return;
}


/*
 * FUN_10001350 at 10001350
 * undefined FUN_10001350(void)
 * Address ranges: 10001350-1000137d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10001350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


/*
 * FUN_10001380 at 10001380
 * undefined FUN_10001380(void)
 * Address ranges: 10001380-10001475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001380(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_retaddr;
  undefined4 *puStack_94;
  undefined1 auStack_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_60;
  
  if (param_1[4] == 0) {
    return 1;
  }
  if (param_1[10] == 0) {
    puStack_94 = &local_7c;
    local_7c = 0x7c;
    local_78 = 6;
    local_74 = 0;
    local_70 = 0;
    (**(code **)(*(int *)param_1[3] + 0x58))((int *)param_1[3]);
    puStack_94 = (undefined4 *)0x0;
    do {
      while( true ) {
        iVar1 = (**(code **)(*(int *)param_1[3] + 100))
                          ((int *)param_1[3],&puStack_94,auStack_84,0,0);
        if (iVar1 == 0) {
          *unaff_retaddr = uStack_60;
          *param_1 = local_74;
          param_1[10] = 1;
          param_1[0xb] = *unaff_retaddr;
          param_1[0xc] = *param_1;
          return 1;
        }
        if (iVar1 != -0x7789fe3e) break;
        iVar1 = FUN_10001480(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    } while (iVar1 == -0x7789fde4);
  }
  return 0;
}


/*
 * FUN_10001480 at 10001480
 * undefined FUN_10001480(void)
 * Address ranges: 10001480-100014c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_10001480(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x50))((int *)*param_1,param_1[9],0x11);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0x54))
                    ((int *)*param_1,param_1[5],param_1[6],param_1[7],0,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 100))((int *)*param_1);
  return iVar1 == 0;
}


/*
 * FUN_100014d0 at 100014d0
 * undefined FUN_100014d0(void)
 * Address ranges: 100014d0-1000152b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100014d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    do {
      while( true ) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x80))(*(int **)(param_1 + 0xc),0);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          return 1;
        }
        if (iVar1 != -0x7789fe3e) break;
        iVar1 = FUN_10001480(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    } while (iVar1 == -0x7789fde4);
  }
  return 0;
}


/*
 * FUN_10001530 at 10001530
 * undefined FUN_10001530(void)
 * Address ranges: 10001530-1000166c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001530(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puStack_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  puStack_84 = (undefined1 *)&local_7c;
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  local_7c = 0x7c;
  local_78 = 6;
  local_74 = 0;
  local_70 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(*(int **)(param_1 + 0xc));
  puStack_84 = (undefined1 *)0x7c;
  local_7c = 0;
  local_78 = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x58))(*(int **)(param_1 + 8),&puStack_84);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (((uVar1 & 2) == 0) || ((uVar1 & 0x10) == 0)) {
    if ((uVar1 & 0x40) == 0) {
      do {
        while( true ) {
          iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))
                            (*(int **)(param_1 + 8),0,*(undefined4 *)(param_1 + 0xc),0,0x1000000,0);
          if (iVar2 == 0) {
            return 1;
          }
          if (iVar2 != -0x7789fe3e) break;
          iVar2 = FUN_10001480(param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      } while (iVar2 == -0x7789fde4);
    }
    else {
      do {
        while( true ) {
          iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),8);
          if (iVar2 == 0) {
            return 1;
          }
          if (iVar2 != -0x7789fe3e) break;
          iVar2 = FUN_10001480(param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      } while (iVar2 == -0x7789fde4);
    }
  }
  else {
    do {
      while( true ) {
        iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                          (*(int **)(param_1 + 8),0,0,*(undefined4 *)(param_1 + 0xc),0,0);
        if (iVar2 == 0) {
          return 1;
        }
        if (iVar2 != -0x7789fe3e) break;
        iVar2 = FUN_10001480(param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
    } while (iVar2 == -0x7789fde4);
  }
  return 0;
}


/*
 * FUN_10001670 at 10001670
 * undefined FUN_10001670(void)
 * Address ranges: 10001670-100016f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 *
FUN_10001670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = _malloc(0x34);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_10001700(puVar1);
  if (iVar2 != 0) {
    puVar1[9] = param_1;
    puVar1[4] = 0;
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1,param_1,0x11);
    if (iVar2 == 0) {
      iVar2 = FUN_100017a0(puVar1,param_2,param_3,param_4,param_5);
      if (iVar2 != 0) {
        return puVar1;
      }
    }
  }
  FUN_10001350(puVar1);
  FUN_10018dc8(puVar1);
  return (undefined4 *)0x0;
}


/*
 * FUN_10001700 at 10001700
 * undefined FUN_10001700(void)
 * Address ranges: 10001700-10001798
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001700(undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  param_1[1] = 0;
  *param_1 = 0;
  hModule = LoadLibraryA(s_ddraw_dll_1002106c);
  param_1[1] = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_DirectDrawCreate_10021058);
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)(0,&local_4,0);
      if (iVar2 == 0) {
        if (local_4 == (int *)0x0) goto LAB_1000178b;
        iVar2 = (**(code **)*local_4)(local_4,&DAT_100207d8,param_1);
        if (iVar2 == 0) {
          (**(code **)(*local_4 + 8))(local_4);
          return 1;
        }
      }
    }
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
    local_4 = (int *)0x0;
  }
LAB_1000178b:
  FUN_10001350(param_1);
  return 0;
}


/*
 * FUN_100017a0 at 100017a0
 * undefined FUN_100017a0(void)
 * Address ranges: 100017a0-10001a78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4
FUN_100017a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint auStack_a8 [2];
  uint uStack_4;
  
  piStack_b8 = (int *)*param_1;
  auStack_a8[1] = 0;
  auStack_a8[0] = 0;
  uStack_ac = param_4;
  param_1[8] = 0;
  uStack_b0 = param_3;
  uStack_b4 = param_2;
  (**(code **)(*piStack_b8 + 0x54))();
  param_1[6] = param_3;
  param_1[5] = param_2;
  param_1[7] = param_4;
  if ((uStack_4 & 0x400) != 0) goto LAB_100019b1;
  puVar4 = (undefined4 *)&stack0xffffff6c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 2,0);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 3,0);
    if (iVar3 != 0) goto LAB_100019b1;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    (**(code **)(*(int *)param_1[2] + 0x38))((int *)param_1[2],auStack_a8);
    if ((auStack_a8[0] & 0x4000) == 0) goto LAB_100019b1;
    piVar1 = (int *)param_1[3];
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    (**(code **)(*piVar1 + 0x38))(piVar1,auStack_a8);
    if ((auStack_a8[0] & 0x4000) == 0) goto LAB_100019b1;
    uVar2 = param_1[8];
    param_1[8] = uVar2 | 2;
    if ((uStack_4 & 0x200) != 0) goto LAB_100019b1;
    uVar2 = uVar2 | 0x12;
  }
  else {
    if (((param_1[8] & 2) != 0) || ((param_1[8] & 0x200) != 0)) goto LAB_100019b1;
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 2,0);
    if (iVar3 != 0) goto LAB_100019b1;
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 3,0);
    if (iVar3 != 0) goto LAB_100019b1;
    uVar2 = param_1[8] | 0x21;
  }
  param_1[8] = uVar2;
LAB_100019b1:
  if (((uStack_4 & 0x400) != 0) || (param_1[3] == 0)) {
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    puVar4 = (undefined4 *)&stack0xffffff6c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&stack0xffffff6c,param_1 + 2,0);
    if (iVar3 == 0) {
      piVar1 = (int *)param_1[2];
      uStack_b4 = 0;
      piStack_b8 = (int *)0x4;
      uStack_b0 = 0;
      uStack_ac = 0;
      iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,&piStack_b8,param_1 + 3);
      if (iVar3 != 0) {
        return 0;
      }
      param_1[8] = param_1[8] | 0x41;
    }
  }
  return 1;
}


/*
 * FUN_10001a80 at 10001a80
 * undefined FUN_10001a80(void)
 * Address ranges: 10001a80-10001b86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Removing unreachable block (ram,0x10001aa4) */

undefined4
FUN_10001a80(int *param_1,uint *param_2,int *param_3,int *param_4,uint *param_5,int *param_6,
            int *param_7,uint *param_8,int *param_9)

{
  int iVar1;
  uint uVar2;
  uint *unaff_retaddr;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  (**(code **)(*(int *)param_1[2] + 0x54))((int *)param_1[2]);
  *unaff_retaddr = uStack_1c >> 3;
  *param_2 = uStack_18;
  *param_5 = uStack_14;
  *param_8 = uStack_10;
  iVar1 = 0;
  for (uVar2 = uStack_18; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  *param_1 = iVar1;
  iVar1 = 0;
  for (uVar2 = uStack_14; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  *param_4 = iVar1;
  iVar1 = 0;
  for (uVar2 = uStack_10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  *param_7 = iVar1;
  uVar2 = uStack_18 >> ((byte)*param_1 & 0x1f);
  *param_3 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    *param_3 = *param_3 + 1;
  }
  uVar2 = uStack_14 >> ((byte)*param_4 & 0x1f);
  *param_6 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    *param_6 = *param_6 + 1;
  }
  uVar2 = uStack_10 >> ((byte)*param_7 & 0x1f);
  *param_9 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    *param_9 = *param_9 + 1;
  }
  return 1;
}


/*
 * FUN_10001b90 at 10001b90
 * undefined FUN_10001b90(void)
 * Address ranges: 10001b90-10001c20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001b90(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 unaff_retaddr;
  int local_7c [31];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  local_7c[2] = 0;
  local_7c[0] = 0x7c;
  local_7c[3] = 0;
  local_7c[1] = 6;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(*(int **)(param_1 + 0xc),local_7c);
  uVar1 = *(int *)(param_1 + 0x30) * local_7c[0];
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = CONCAT22(CONCAT11(unaff_retaddr,unaff_retaddr),CONCAT11(unaff_retaddr,unaff_retaddr));
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = unaff_retaddr;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return 1;
}


/*
 * FUN_10001c30 at 10001c30
 * undefined FUN_10001c30(void)
 * Address ranges: 10001c30-10001c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001c30(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x60))(*(int **)(param_1 + 8));
    if (iVar1 == -0x7789fe3e) {
      iVar1 = FUN_10001480(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      ShowWindow(*(HWND *)(param_1 + 0x24),1);
    }
  }
  return 1;
}


/*
 * FUN_10001c80 at 10001c80
 * undefined FUN_10001c80(void)
 * Address ranges: 10001c80-10001d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001c80(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 auStack_450 [2];
  undefined1 *puStack_448;
  int local_428 [125];
  char acStack_234 [556];
  char *pcStack_8;
  uint uStack_4;
  
  iVar2 = FUN_10001700();
  if (iVar2 == 0) {
    return 0;
  }
  piVar5 = local_428;
  for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar2 = (**(code **)(iRam00000000 + 0x6c))();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    pcVar4 = acStack_234;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 + 0x17 < uStack_4) {
      pcVar4 = s_Software__Full_Screen__10021078;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcStack_8 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcStack_8 = pcStack_8 + 4;
      }
      puStack_448 = &LAB_10001d50;
      *pcStack_8 = *pcVar4;
      auStack_450[0] = 0;
      (**(code **)(local_428[0] + 0x20))(local_428,0);
      FUN_10001350(auStack_450);
      return 1;
    }
  }
  puStack_448 = (undefined1 *)0x10001cf8;
  FUN_10001350();
  return 0;
}


/*
 * FUN_10001d80 at 10001d80
 * undefined FUN_10001d80(void)
 * Address ranges: 10001d80-10001da8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10001d80(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  *param_3 = *(undefined4 *)(param_1 + 0x14);
  *param_4 = *(undefined4 *)(param_1 + 8);
  *param_5 = *(undefined4 *)(param_1 + 0x18);
  return;
}


/*
 * FUN_10001db0 at 10001db0
 * undefined FUN_10001db0(void)
 * Address ranges: 10001db0-10001e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_10001db0(char *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 < 0x12) {
    return false;
  }
  *(undefined4 *)param_1 = s_Software__Window__10021094._0_4_;
  *(undefined4 *)(param_1 + 4) = s_Software__Window__10021094._4_4_;
  *(undefined4 *)(param_1 + 8) = s_Software__Window__10021094._8_4_;
  *(undefined4 *)(param_1 + 0xc) = s_Software__Window__10021094._12_4_;
  *(undefined2 *)(param_1 + 0x10) = s_Software__Window__10021094._16_2_;
  iVar1 = FUN_10002990(param_3,0xffffffff,0xffffffff,0x10,0);
  return iVar1 != 0;
}


/*
 * FUN_10001e10 at 10001e10
 * undefined FUN_10001e10(void)
 * Address ranges: 10001e10-10001e71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001e10(undefined4 *param_1)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)*param_1);
  if (hdc == (HDC)0x0) {
    return 0;
  }
  iVar1 = SetStretchBltMode(hdc,3);
  if (iVar1 == 0) {
    return 0;
  }
  StretchDIBits(hdc,0,0,param_1[4],param_1[5],0,0,param_1[4],param_1[5],(void *)param_1[0xc],
                (BITMAPINFO *)param_1[10],0,0xcc0020);
  ReleaseDC((HWND)*param_1,hdc);
  return 1;
}


/*
 * FUN_10001e80 at 10001e80
 * undefined FUN_10001e80(void)
 * Address ranges: 10001e80-10001ede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001e80(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc);
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return 1;
  }
  uVar3 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar1 = (undefined2)param_2;
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    for (uVar2 = uVar3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = CONCAT22(uVar1,uVar1);
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined2 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
  }
  return 1;
}


/*
 * FUN_10001ee0 at 10001ee0
 * undefined FUN_10001ee0(void)
 * Address ranges: 10001ee0-10001fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_10001ee0(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *local_14;
  tagRECT local_10;
  
  local_14 = _malloc(0x34);
  if (local_14 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  BVar1 = GetClientRect(param_1,&local_10);
  if (BVar1 == 0) {
    return (undefined4 *)0x0;
  }
  local_14[4] = (local_10.right - local_10.left) + 3U & 0xfffffffc;
  local_14[5] = local_10.bottom - local_10.top;
  if ((int)local_14[4] < 1) {
    return (undefined4 *)0x0;
  }
  if ((int)local_14[5] < 1) {
    return (undefined4 *)0x0;
  }
  local_14[1] = 0;
  local_14[2] = param_4;
  local_14[3] = ((int)(local_14[2] + ((int)local_14[2] >> 0x1f & 7U)) >> 3) * local_14[4];
  *local_14 = param_1;
  local_14[10] = 0;
  local_14[0xb] = 0;
  local_14[0xc] = 0;
  iVar2 = FUN_10001fe0(local_14[4],local_14[5],param_4,param_1,local_14 + 7);
  if (iVar2 == 0) {
    FUN_100024f0(&local_14);
    return (undefined4 *)0x0;
  }
  return local_14;
}


/*
 * FUN_10001fe0 at 10001fe0
 * undefined FUN_10001fe0(void)
 * Address ranges: 10001fe0-10002174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_10001fe0(undefined4 param_1,int param_2,int param_3,HWND param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HDC hdc;
  int iVar3;
  HBITMAP pHVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_5;
  param_5[4] = 0;
  param_5[5] = 0;
  puVar2 = _malloc(0x428);
  puVar1[3] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return false;
  }
  for (iVar5 = 0x10a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)puVar1[3];
  puVar2[1] = param_1;
  *puVar2 = 0x28;
  puVar2[2] = -param_2;
  *(undefined2 *)(puVar2 + 3) = 1;
  *(undefined2 *)((int)puVar2 + 0xe) = (undefined2)param_3;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  hdc = GetDC(param_4);
  if (hdc == (HDC)0x0) {
    return false;
  }
  iVar5 = GetDeviceCaps(hdc,0xe);
  iVar3 = GetDeviceCaps(hdc,0xc);
  iVar5 = iVar5 * iVar3;
  FUN_10002180(s_DIBDisplay__Desktop__d_BPP_100210a8,iVar5);
  iVar3 = FUN_100021e0(hdc,iVar5,&param_5,&local_8,&local_4);
  if (iVar3 == 0) {
    param_5 = (undefined4 *)0xf800;
    local_8 = 0x7e0;
    local_4 = 0x1f;
  }
  if (param_3 == 0x10) {
    puVar2[4] = 3;
    if ((iVar5 == 0xf) || (iVar5 == 0x10)) {
      *puVar1 = param_5;
      puVar1[1] = local_8;
      puVar1[2] = local_4;
    }
    else {
      *puVar1 = 0xf800;
      puVar1[1] = 0x7e0;
      puVar1[2] = 0x1f;
    }
  }
  else if (param_3 == 0x18) {
    puVar2[4] = 3;
    *puVar1 = 0xff0000;
    puVar1[1] = 0xff00;
    puVar1[2] = 0xff;
  }
  *(undefined4 *)(puVar1[3] + 0x28) = *puVar1;
  *(undefined4 *)(puVar1[3] + 0x2c) = puVar1[1];
  *(undefined4 *)(puVar1[3] + 0x30) = puVar1[2];
  pHVar4 = CreateDIBSection(hdc,(BITMAPINFO *)puVar1[3],0,(void **)(puVar1 + 5),(HANDLE)0x0,0);
  puVar1[4] = pHVar4;
  ReleaseDC(param_4,hdc);
  return puVar1[4] != 0;
}


/*
 * FUN_10002180 at 10002180
 * undefined FUN_10002180(void)
 * Address ranges: 10002180-100021de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002180(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  if (param_1 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 0x1001) {
      FUN_10018feb(&DAT_10024918,param_1,&stack0x00000008);
      OutputDebugStringA((LPCSTR)&DAT_10024918);
      return;
    }
  }
  pcVar4 = s__String_missing_or_too_large__100210c4;
  puVar5 = &DAT_10024918;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pcVar4;
  OutputDebugStringA((LPCSTR)&DAT_10024918);
  return;
}


/*
 * FUN_100021e0 at 100021e0
 * undefined FUN_100021e0(void)
 * Address ranges: 100021e0-100024ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100021e0(HDC param_1,int param_2,RGBQUAD *param_3,uint *param_4,uint *param_5)

{
  BYTE BVar1;
  BYTE BVar2;
  BYTE BVar3;
  HBITMAP hbm;
  LPBITMAPINFO lpbmi;
  HDC hdc;
  COLORREF color;
  COLORREF CVar4;
  int iVar5;
  uint uVar6;
  _OSVERSIONINFOA *p_Var7;
  LPBITMAPINFO ptVar8;
  _OSVERSIONINFOA local_94;
  
  if (8 < param_2) {
    p_Var7 = &local_94;
    for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
      p_Var7->dwOSVersionInfoSize = 0;
      p_Var7 = (_OSVERSIONINFOA *)&p_Var7->dwMajorVersion;
    }
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      hbm = CreateCompatibleBitmap(param_1,8,8);
      if (hbm == (HBITMAP)0x0) {
        return 0;
      }
      lpbmi = _malloc(0x34);
      if (lpbmi == (LPBITMAPINFO)0x0) {
        DeleteObject(hbm);
        return 0;
      }
      ptVar8 = lpbmi;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        (ptVar8->bmiHeader).biSize = 0;
        ptVar8 = (LPBITMAPINFO)&(ptVar8->bmiHeader).biWidth;
      }
      (lpbmi->bmiHeader).biSize = 0x2c;
      (lpbmi->bmiHeader).biBitCount = (WORD)param_2;
      (lpbmi->bmiHeader).biCompression = 3;
      iVar5 = GetDIBits(param_1,hbm,0,0,(LPVOID)0x0,lpbmi,0);
      if (iVar5 == 0) {
        FUN_10018dc8(lpbmi);
        DeleteObject(hbm);
        return 0;
      }
      BVar1 = lpbmi->bmiColors[0].rgbGreen;
      BVar2 = lpbmi->bmiColors[0].rgbRed;
      BVar3 = lpbmi->bmiColors[0].rgbReserved;
      param_3->rgbBlue = lpbmi->bmiColors[0].rgbBlue;
      param_3->rgbGreen = BVar1;
      param_3->rgbRed = BVar2;
      param_3->rgbReserved = BVar3;
      *param_4 = lpbmi[1].bmiHeader.biSize;
      uVar6 = lpbmi[1].bmiHeader.biWidth;
      *param_5 = uVar6;
      FUN_10002180(s___x__x__x__10021158,*param_3,*param_4,uVar6);
      FUN_10018dc8(lpbmi);
      DeleteObject(hbm);
      if ((((uint)*param_3 | *param_4 | *param_5) & 0x7fff) != 0x7fff) {
        SetLastError(0);
        return 0;
      }
    }
    else {
      hdc = CreateDCA(s_Display_10021150,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
      if (hdc == (HDC)0x0) {
        return 0;
      }
      color = GetPixel(hdc,0,0);
      if (color == 0xffffffff) {
        DeleteDC(hdc);
        return 0;
      }
      CVar4 = SetPixel(hdc,0,0,0x80808);
      if (CVar4 == 0xffffffff) {
        DeleteDC(hdc);
        return 0;
      }
      CVar4 = GetPixel(hdc,0,0);
      uVar6 = CVar4 & 0xffffff;
      if (uVar6 == 0xffffffff) {
        DeleteDC(hdc);
        return 0;
      }
      SetPixel(param_1,0,0,color);
      DeleteDC(hdc);
      FUN_10002180(s_DIBDisplay__Desktop_pixel_format_10021124,uVar6);
      if (uVar6 == 0) {
        FUN_10002180(s__5_5_5__100210e4);
        param_3->rgbBlue = '\0';
        param_3->rgbGreen = '|';
        param_3->rgbRed = '\0';
        param_3->rgbReserved = '\0';
        *param_4 = 0x3e0;
      }
      else {
        if (uVar6 == 0x800) {
          FUN_10002180(s__5_6_5__100210f0);
        }
        else {
          if (uVar6 == 0x80808) {
            FUN_10002180(s__8_8_8__100210fc);
            param_3->rgbBlue = '\0';
            param_3->rgbGreen = '\0';
            param_3->rgbRed = 0xff;
            param_3->rgbReserved = '\0';
            *param_4 = 0xff00;
            *param_5 = 0xff;
            return 1;
          }
          FUN_10002180(s__Unsupported__using_5_6_5__10021108);
          if ((param_2 != 0xf) && (param_2 != 0x10)) {
            return 0;
          }
        }
        param_3->rgbBlue = '\0';
        param_3->rgbGreen = 0xf8;
        param_3->rgbRed = '\0';
        param_3->rgbReserved = '\0';
        *param_4 = 0x7e0;
      }
      *param_5 = 0x1f;
    }
  }
  return 1;
}


/*
 * FUN_100024f0 at 100024f0
 * undefined FUN_100024f0(void)
 * Address ranges: 100024f0-10002512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100024f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10002520(iVar1 + 0x1c);
  FUN_10018dc8(iVar1);
  *param_1 = 0;
  return;
}


/*
 * FUN_10002520 at 10002520
 * undefined FUN_10002520(void)
 * Address ranges: 10002520-10002552
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002520(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_10018dc8(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x10) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/*
 * FUN_10002560 at 10002560
 * undefined FUN_10002560(void)
 * Address ranges: 10002560-10002582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10002560(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = 1;
  return 1;
}


/*
 * FUN_10002590 at 10002590
 * undefined FUN_10002590(void)
 * Address ranges: 10002590-100025a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10002590(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}


/*
 * FUN_100025b0 at 100025b0
 * undefined FUN_100025b0(void)
 * Address ranges: 100025b0-100026af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4
FUN_100025b0(int param_1,int *param_2,int *param_3,uint *param_4,int *param_5,int *param_6,
            uint *param_7,int *param_8,int *param_9,uint *param_10,int *param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  *param_2 = (int)(*(int *)(param_1 + 8) + (*(int *)(param_1 + 8) >> 0x1f & 7U)) >> 3;
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar5 = 0x1f;
  do {
    uVar4 = 1 << ((byte)iVar5 & 0x1f);
    if ((uVar1 & uVar4) != 0) {
      local_c = iVar5;
    }
    if ((uVar2 & uVar4) != 0) {
      local_8 = iVar5;
    }
    if ((uVar3 & uVar4) != 0) {
      local_4 = iVar5;
    }
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    uVar4 = 1 << ((byte)iVar5 & 0x1f);
    if ((uVar1 & uVar4) != 0) {
      iVar6 = (iVar5 - local_c) + 1;
    }
    if ((uVar2 & uVar4) != 0) {
      iVar8 = (iVar5 - local_8) + 1;
    }
    if ((uVar3 & uVar4) != 0) {
      iVar7 = (iVar5 - local_4) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  *param_3 = local_c;
  *param_6 = local_8;
  *param_9 = local_4;
  *param_4 = uVar1;
  *param_7 = uVar2;
  *param_10 = uVar3;
  *param_5 = iVar6;
  *param_8 = iVar8;
  *param_11 = iVar7;
  return 1;
}


/*
 * FUN_100026b0 at 100026b0
 * undefined FUN_100026b0(void)
 * Address ranges: 100026b0-100026ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100026b0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  *param_2 = *param_1;
  if (*param_1 == 0) {
    FUN_10001d80(param_1[1]);
    return;
  }
  FUN_100012c0(param_1[2],param_3,param_4,param_5,param_6);
  return;
}


/*
 * FUN_100026f0 at 100026f0
 * undefined FUN_100026f0(void)
 * Address ranges: 100026f0-10002744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100026f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  if (*param_1 == 0) {
    FUN_100025b0(param_1[1]);
    return;
  }
  FUN_10001a80(param_1[2],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  return;
}


/*
 * FUN_10002750 at 10002750
 * undefined FUN_10002750(void)
 * Address ranges: 10002750-10002772
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002750(int *param_1)

{
  if (*param_1 == 0) {
    FUN_10001e10(param_1[1]);
    return;
  }
  FUN_10001530(param_1[2]);
  return;
}


/*
 * FUN_10002780 at 10002780
 * undefined FUN_10002780(void)
 * Address ranges: 10002780-100027a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002780(int *param_1,undefined4 param_2)

{
  if (*param_1 == 0) {
    FUN_10001e80(param_1[1]);
    return;
  }
  FUN_10001b90(param_1[2],param_2);
  return;
}


/*
 * FUN_100027b0 at 100027b0
 * undefined FUN_100027b0(void)
 * Address ranges: 100027b0-100027dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100027b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*param_1 == 0) {
    FUN_10002560(param_1[1]);
    return;
  }
  FUN_10001380(param_1[2],param_2,param_3);
  return;
}


/*
 * FUN_100027e0 at 100027e0
 * undefined FUN_100027e0(void)
 * Address ranges: 100027e0-10002802
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100027e0(int *param_1)

{
  if (*param_1 == 0) {
    FUN_10002590(param_1[1]);
    return;
  }
  FUN_100014d0(param_1[2]);
  return;
}


/*
 * FUN_10002810 at 10002810
 * undefined FUN_10002810(void)
 * Address ranges: 10002810-10002830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10002810(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return 1;
  }
  uVar1 = FUN_10001c30(param_1[2],param_2);
  return uVar1;
}


/*
 * FUN_10002840 at 10002840
 * undefined FUN_10002840(void)
 * Address ranges: 10002840-1000287d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002840(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    piVar2 = piVar1 + 1;
    FUN_100024f0(piVar2);
  }
  else {
    piVar2 = piVar1 + 2;
    FUN_100012f0(piVar2);
  }
  *piVar2 = 0;
  FUN_10018dc8(piVar1);
  *param_1 = 0;
  return;
}


/*
 * FUN_10002880 at 10002880
 * undefined FUN_10002880(void)
 * Address ranges: 10002880-10002907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * FUN_10002880(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _malloc(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    *piVar1 = param_2;
    piVar1[2] = 0;
    if (param_2 == 0) {
      iVar2 = FUN_10001ee0(param_1,param_3,param_4,param_5,param_6);
      piVar1[1] = iVar2;
    }
    else {
      iVar2 = FUN_10001670(param_1,param_3,param_4,param_5,param_6);
      piVar1[2] = iVar2;
    }
    if (iVar2 != 0) {
      return piVar1;
    }
    FUN_10018dc8(piVar1);
  }
  return (int *)0x0;
}


/*
 * FUN_10002910 at 10002910
 * undefined FUN_10002910(void)
 * Address ranges: 10002910-10002939
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 1) {
    FUN_10001c80();
    return;
  }
  FUN_10001db0(param_2,param_3,param_4);
  return;
}


/*
 * FUN_10002940 at 10002940
 * undefined FUN_10002940(void)
 * Address ranges: 10002940-1000295c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002940(void)

{
  void *pvVar1;
  
  pvVar1 = _malloc(0x104);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(undefined4 *)((int)pvVar1 + 0x100) = 0;
  return;
}


/*
 * FUN_10002960 at 10002960
 * undefined FUN_10002960(void)
 * Address ranges: 10002960-10002977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002960(undefined4 *param_1)

{
  FUN_10018dc8(*param_1);
  *param_1 = 0;
  return;
}


/*
 * FUN_10002980 at 10002980
 * undefined FUN_10002980(void)
 * Address ranges: 10002980-1000298a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10002980(int param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}


/*
 * FUN_10002990 at 10002990
 * undefined FUN_10002990(void)
 * Address ranges: 10002990-100029f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4
FUN_10002990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(int *)(param_1 + 0x100) < 0x10) {
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + param_1) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + 4 + param_1) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + 8 + param_1) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x100) * 0x10 + 0xc + param_1) = param_5;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    return 1;
  }
  return 0;
}


/*
 * FUN_10002a00 at 10002a00
 * undefined FUN_10002a00(void)
 * Address ranges: 10002a00-10002a44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4
FUN_10002a00(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x100))) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
    *param_3 = *puVar1;
    *param_4 = puVar1[1];
    *param_5 = puVar1[2];
    *param_6 = puVar1[3];
    return 1;
  }
  return 0;
}


/*
 * FUN_10002a50 at 10002a50
 * undefined FUN_10002a50(void)
 * Address ranges: 10002a50-10002c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10002a50(int param_1,int *param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_10025c74 != 0) {
    DAT_10025918 = *(int *)(param_1 + 4);
    _DAT_10025920 = *(undefined4 *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    DAT_10025928 = *(int *)(param_1 + 0x18);
    if (param_2 != (int *)0x0) {
      DAT_10025928 = DAT_10025928 + (param_2[1] * iVar4 + *param_2) * 2;
      iVar2 = param_2[3] - param_2[1];
      iVar4 = param_2[2] - *param_2;
    }
    DAT_1002592c = iVar4;
    if (param_3 < 0) {
      DAT_1002592c = iVar4 + param_3;
      if (DAT_1002592c < 1) {
        DAT_1002591c = iVar2;
        DAT_1002592c = iVar4;
        return 1;
      }
      DAT_10025928 = DAT_10025928 + param_3 * -2;
      param_3 = 0;
    }
    DAT_1002591c = iVar2;
    if (param_4 < 0) {
      DAT_1002591c = iVar2 + param_4;
      if (DAT_1002591c < 1) {
        DAT_1002591c = iVar2;
        return 1;
      }
      iVar4 = DAT_10025918 * param_4;
      param_4 = 0;
      DAT_10025928 = DAT_10025928 + iVar4 * -2;
    }
    if ((param_3 < DAT_10025c38) && (param_4 < DAT_10025c3c)) {
      if (DAT_10025c38 + -1 <= DAT_1002592c + param_3) {
        DAT_1002592c = (DAT_10025c38 - param_3) + -1;
      }
      if (DAT_10025c3c + -1 <= DAT_1002591c + param_4) {
        DAT_1002591c = (DAT_10025c3c - param_4) + -1;
      }
      if ((0 < DAT_1002592c) && (0 < DAT_1002591c)) {
        iVar4 = DAT_10025c34 + ((DAT_10025c40 >> 1) * param_4 + param_3) * 2;
        _DAT_10025934 = DAT_10025c40 + DAT_1002592c * -2;
        _DAT_10025924 = DAT_10025918 * 2 + DAT_1002592c * -2;
        iVar2 = DAT_1002591c;
        iVar5 = DAT_10025928;
        DAT_10025930 = iVar4;
        do {
          iVar4 = iVar4 + DAT_1002592c * 2;
          iVar5 = iVar5 + DAT_1002592c * 2;
          iVar3 = DAT_1002592c * -2;
          do {
            sVar1 = *(short *)(iVar5 + iVar3);
            if (sVar1 != 1) {
              *(short *)(iVar4 + iVar3) = sVar1;
            }
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
          iVar4 = iVar4 + _DAT_10025934;
          iVar5 = iVar5 + _DAT_10025924;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return 1;
}


/*
 * FUN_10002c10 at 10002c10
 * undefined FUN_10002c10(void)
 * Address ranges: 10002c10-10002c32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void * FUN_10002c10(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  do {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    iVar2 = FUN_10002c40();
  } while (iVar2 != 0);
  return (void *)0x0;
}


/*
 * FUN_10002c40 at 10002c40
 * undefined FUN_10002c40(void)
 * Address ranges: 10002c40-10002c56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10002c40(void)

{
  undefined4 uVar1;
  
  if ((DAT_1002593c != 0) && (DAT_10025940 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_10025940)();
    return uVar1;
  }
  return 0;
}


/*
 * FUN_10002c60 at 10002c60
 * undefined FUN_10002c60(void)
 * Address ranges: 10002c60-10002c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002c60(undefined4 param_1)

{
  FUN_10018dc8(param_1);
  return;
}


/*
 * FUN_10002c70 at 10002c70
 * undefined FUN_10002c70(void)
 * Address ranges: 10002c70-10002c96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002c70(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
  puVar3 = DAT_100259d0;
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = 0xff;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


/*
 * FUN_10002ca0 at 10002ca0
 * undefined FUN_10002ca0(void)
 * Address ranges: 10002ca0-10002cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_10002ca0(undefined4 param_1)

{
  DAT_10025c74 = param_1;
  FUN_10002810(DAT_10025c6c,param_1);
  return 1;
}


/*
 * FUN_10002fb0 at 10002fb0
 * undefined FUN_10002fb0(void)
 * Address ranges: 10002fb0-10002ffd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002fb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    iVar1 = 0;
    if (0 < param_1[1]) {
      piVar2 = param_1 + 0x76;
      do {
        if (*piVar2 != 0) {
          FUN_10002960(piVar2);
          *piVar2 = 0;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x42;
      } while (iVar1 < param_1[1]);
    }
    param_1[1] = 0;
  }
  return;
}


/*
 * FUN_10003000 at 10003000
 * undefined FUN_10003000(void)
 * Address ranges: 10003000-1000311b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10003000(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [62];
  
  local_100 = DAT_100213b4;
  local_fc = DAT_100213b8;
  puVar9 = local_f8;
  for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar4 = 0;
  if (0 < *param_1) {
    *param_1 = *param_1 + 1;
    return 1;
  }
  *param_1 = 1;
  param_1[1] = 0;
  piVar7 = param_1 + 0x76;
  do {
    iVar3 = FUN_10002940();
    *piVar7 = iVar3;
    if (iVar3 == 0) {
      FUN_10002fb0(param_1);
      return 0;
    }
    uVar5 = 0xffffffff;
    pcVar8 = (char *)&local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_10002910(iVar4,piVar7 + -0x41,0x100 - (~uVar5 - 1),iVar3);
    if (iVar3 == 0) {
      FUN_10002960(piVar7);
      *piVar7 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pcVar8 = (char *)&local_100;
      do {
        pcVar12 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      piVar10 = piVar7 + -0x41;
      do {
        piVar11 = piVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        piVar11 = (int *)((int)piVar10 + 1);
        iVar2 = *piVar10;
        piVar10 = piVar11;
      } while ((char)iVar2 != '\0');
      pcVar8 = pcVar12 + -uVar5;
      pcVar12 = (char *)((int)piVar11 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar12 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar12 = pcVar12 + 1;
      }
      piVar7[-1] = iVar4;
      param_1[1] = param_1[1] + 1;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 0x42;
    if (1 < iVar4) {
      return 1;
    }
  } while( true );
}


/*
 * DriverHook at 100032b0
 * undefined DriverHook(void)
 * Address ranges: 100032b0-100032c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DriverHook(undefined4 *param_1)

{
                    /* 0x32b0  1  DriverHook */
  *param_1 = &PTR_s_Software_driver__v100_3__Copyrig_100212a8;
  _DAT_100212b8 = &DAT_1020e8e0;
  return 1;
}


/*
 * FUN_100038d0 at 100038d0
 * undefined FUN_100038d0(void)
 * Address ranges: 100038d0-100039ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_100038d0(int param_1,float param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_4;
  
  iVar8 = 0;
  local_4 = 1e+06;
  if (0 < param_5) {
    pfVar6 = (float *)(param_1 + 0xc);
    do {
      iVar8 = iVar8 + 1;
      iVar7 = iVar8 % param_5;
      fVar2 = *(float *)(param_1 + iVar7 * 0x24) - pfVar6[-3];
      iVar1 = param_1 + iVar7 * 0x24;
      fVar5 = *(float *)(param_1 + 4 + iVar7 * 0x24) - pfVar6[-2];
      fVar4 = (*(float *)(iVar1 + 0xc) - *pfVar6) / param_2;
      fVar3 = (*(float *)(iVar1 + 0x10) - pfVar6[1]) / param_3;
      fVar2 = (fVar4 * fVar4 + fVar3 * fVar3) / (fVar2 * fVar2 + fVar5 * fVar5);
      if (fVar2 < local_4) {
        local_4 = fVar2;
      }
      pfVar6 = pfVar6 + 9;
    } while (iVar8 < param_5);
    if (local_4 <= 3.0) {
      iVar8 = 0;
      goto LAB_1000399e;
    }
    if (local_4 <= 15.0) {
      iVar8 = 1;
      goto LAB_1000399e;
    }
    iVar8 = 2;
    if (local_4 <= 35.0) goto LAB_1000399e;
  }
  iVar8 = 3;
LAB_1000399e:
  if (param_4 <= iVar8) {
    iVar8 = param_4 + -1;
  }
  return iVar8;
}


/*
 * FUN_100160f0 at 100160f0
 * undefined FUN_100160f0(void)
 * Address ranges: 100160f0-10016129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_100160f0(int param_1,int param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_LAB_100213f0 + param_1;
  piVar1 = &DAT_100213ec;
  ppuVar2 = &PTR_LAB_100213f0 + param_1 + param_2 * 2;
  do {
    *piVar1 = (int)*ppuVar3;
    if (*ppuVar2 != (undefined *)0x0) {
      *piVar1 = (int)*ppuVar2;
    }
    piVar1 = piVar1 + 8;
    ppuVar3 = ppuVar3 + 8;
    ppuVar2 = ppuVar2 + 8;
  } while ((int)piVar1 < 0x100217ec);
  return 1;
}


/*
 * FUN_10016130 at 10016130
 * undefined FUN_10016130(void)
 * Address ranges: 10016130-10016139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_10016130(int param_1)

{
  return (&DAT_100213ec)[param_1 * 8];
}


/*
 * FUN_100162f0 at 100162f0
 * undefined FUN_100162f0(void)
 * Address ranges: 100162f0-1001634e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100162f0(void)

{
  if (DAT_10025c78 != 0) {
    FUN_10002c60(DAT_10025c78);
    _DAT_1020e9dc = 0;
  }
  DAT_10025c78 = 0;
  if (DAT_10025c84 != 0) {
    FUN_10002c60(DAT_10025c84);
    _DAT_1020e9dc = 0;
  }
  DAT_10025c84 = 0;
  if (DAT_1020e4a0 != 0) {
    FUN_10002c60(DAT_1020e4a0);
    _DAT_1020e9dc = 0;
  }
  DAT_1020e4a0 = 0;
  return;
}


/*
 * FUN_10016350 at 10016350
 * undefined FUN_10016350(void)
 * Address ranges: 10016350-10016379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10016350(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_10025c7c) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(DAT_10025c78 + -4 + iVar1 * 4) = 0;
    } while (iVar1 < DAT_10025c7c);
  }
  _DAT_10025c80 = 0;
  return;
}


/*
 * FUN_10016380 at 10016380
 * undefined FUN_10016380(void)
 * Address ranges: 10016380-1001644e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10016380(int param_1,int param_2,int param_3)

{
  FUN_100162f0();
  DAT_10025c7c = param_2;
  _DAT_10025c88 = param_3;
  DAT_10025c78 = FUN_10002c10(param_2 << 2);
  if (DAT_10025c78 == 0) {
    return 0;
  }
  DAT_10025c84 = FUN_10002c10(param_3 * 0xc);
  if (DAT_10025c78 == 0) {
    FUN_10002c60(0);
    _DAT_1020e9dc = 0;
    DAT_10025c78 = 0;
    return 0;
  }
  DAT_1020e4a0 = FUN_10002c10(param_1 / 2 << 3);
  if (DAT_1020e4a0 == 0) {
    FUN_10002c60(DAT_10025c78);
    _DAT_1020e9dc = 0;
    DAT_10025c78 = 0;
    FUN_10002c60(DAT_10025c84);
    _DAT_1020e9dc = 0;
    DAT_10025c84 = 0;
    return 0;
  }
  FUN_10016350();
  return 1;
}


/*
 * FUN_100165b0 at 100165b0
 * undefined FUN_100165b0(void)
 * Address ranges: 100165b0-100165d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100165b0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_10026020;
  iVar2 = 20000;
  do {
    if (*piVar1 != 0) {
      FUN_100165e0(piVar1);
    }
    piVar1 = piVar1 + 0x19;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}


/*
 * FUN_100165e0 at 100165e0
 * undefined FUN_100165e0(void)
 * Address ranges: 100165e0-1001664d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100165e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    if (param_1[0x16] != 0) {
      FUN_100165e0(param_1[0x16]);
    }
    if (param_1[0x17] != 0) {
      FUN_100165e0(param_1[0x17]);
    }
    iVar1 = 0;
    if (0 < param_1[3]) {
      piVar2 = param_1 + 6;
      do {
        if (*piVar2 != 0) {
          FUN_10018dc8(*piVar2);
        }
        *piVar2 = 0;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < param_1[3]);
    }
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  return 0;
}


/*
 * FUN_100167f0 at 100167f0
 * undefined FUN_100167f0(void)
 * Address ranges: 100167f0-10016879
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_100167f0(int param_1)

{
  if (param_1 < 2) {
    if (2 < param_1) goto LAB_10016809;
    if (4 < param_1) goto LAB_10016819;
    if (8 < param_1) goto LAB_10016829;
    if (0x10 < param_1) goto LAB_10016839;
    if (0x20 < param_1) goto LAB_10016849;
    if (param_1 < 0x41) {
      if (param_1 < 0x81) {
        return param_1;
      }
      goto LAB_1001686d;
    }
  }
  else {
    if (param_1 < 3) {
      return 2;
    }
LAB_10016809:
    if (param_1 < 5) {
      return 4;
    }
LAB_10016819:
    if (param_1 < 9) {
      return 8;
    }
LAB_10016829:
    if (param_1 < 0x11) {
      return 0x10;
    }
LAB_10016839:
    if (param_1 < 0x21) {
      return 0x20;
    }
LAB_10016849:
    if (param_1 < 0x41) {
      return 0x40;
    }
  }
  if (param_1 < 0x81) {
    return 0x80;
  }
LAB_1001686d:
  if (param_1 < 0x101) {
    param_1 = 0x100;
  }
  return param_1;
}


/*
 * FUN_10016880 at 10016880
 * undefined FUN_10016880(void)
 * Address ranges: 10016880-100168af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * FUN_10016880(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = &DAT_10026020;
  iVar1 = 0;
  do {
    if (*piVar2 == 0) {
      piVar3 = piVar2;
      for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      *piVar2 = 1;
      return piVar2;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x19;
  } while (iVar1 < 20000);
  return (int *)0x0;
}


/*
 * FUN_100169b0 at 100169b0
 * undefined FUN_100169b0(void)
 * Address ranges: 100169b0-100169d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_100169b0(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 8 << (param_2 & 0x1f);
  if ((uVar1 & *(uint *)(param_1 + 0x60)) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x60) = ~uVar1 & *(uint *)(param_1 + 0x60) | 1;
  return 1;
}


/*
 * FUN_10017de0 at 10017de0
 * undefined FUN_10017de0(void)
 * Address ranges: 10017de0-10017e32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017de0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  _DAT_1020e898 = (float)param_1;
  iVar4 = 1;
  puVar2 = &DAT_1020e698;
  do {
    puVar3 = puVar2 + 1;
    lVar1 = (longlong)iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = (int)(0x10000 / lVar1);
    puVar2 = puVar3;
  } while ((int)puVar3 < 0x1020e898);
  DAT_1020e68c = param_2;
  DAT_1020e688 = param_3;
  _DAT_1020e8a0 = param_4;
  return;
}


/*
 * FUN_10017e40 at 10017e40
 * undefined FUN_10017e40(void)
 * Address ranges: 10017e40-10018195
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017e40(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int local_144 [25];
  int iStack_e0;
  undefined4 local_d8 [27];
  undefined4 local_6c [27];
  
  fVar1 = *(float *)(param_4 + 4);
  fVar2 = *(float *)(param_4 + 0x28);
  param_1 = param_1 * 0xc;
  DAT_1020e4e0 = *(uint *)(&DAT_100217ec + param_1);
  fVar3 = *(float *)(param_4 + 0x4c);
  if ((DAT_1020e4e0 & 1) == 0) {
    iVar4 = FUN_100181a0(0x3f800000,0x3f800000);
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 8) >> ((byte)param_3 & 0x1f);
    iVar8 = *(int *)(param_2 + 4) >> ((byte)param_3 & 0x1f);
    iVar5 = FUN_100181a0((float)iVar8,(float)iVar4);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = 1;
    _DAT_1020e64c = 1;
    if (2 < iVar8) {
      do {
        iVar5 = iVar5 + 1;
        _DAT_1020e64c = iVar5;
      } while (1 << ((byte)iVar5 & 0x1f) < iVar8);
    }
    if ((DAT_1020e4e0 & 8) != 0) {
      _DAT_1020e89c = 0;
    }
    _DAT_1020e654 = iVar8 + -1;
    _DAT_1020e658 = iVar4 + -1;
    _DAT_1020e648 = param_3;
    _DAT_1020e640 = *(undefined4 *)(param_2 + 0x18 + param_3 * 4);
    if (*(int *)(param_2 + 0x58) != 0) {
      _DAT_1020e644 = *(undefined4 *)(*(int *)(param_2 + 0x58) + 0x18);
    }
  }
  if ((DAT_1020e4e0 & 0x100) != 0) {
    _DAT_1020e690 = *(int *)(DAT_1020e688 + 0x18) - *(int *)(DAT_1020e68c + 0x18);
  }
  _DAT_10026000 = FUN_10016130();
  _DAT_1020e4a4 = __ftol();
  _DAT_1020e4bc = 0x10 - _DAT_1020e4a4;
  if (fVar2 <= fVar1) {
    if (fVar3 < fVar2) {
      uVar7 = 0;
      uVar9 = 2;
      uVar12 = 1;
      iVar4 = 0;
      goto LAB_10018048;
    }
    uVar9 = 1;
    if (fVar1 < fVar3) {
      uVar12 = 0;
      uVar7 = 2;
      iVar4 = 0;
      goto LAB_10018048;
    }
    uVar12 = 2;
    uVar7 = 0;
  }
  else if (fVar1 <= fVar3) {
    if (fVar3 <= fVar2) {
      uVar9 = 0;
      uVar12 = 2;
      uVar7 = 1;
      iVar4 = 0;
      goto LAB_10018048;
    }
    uVar9 = 0;
    uVar12 = 1;
    uVar7 = 2;
  }
  else {
    uVar9 = 2;
    uVar12 = 0;
    uVar7 = 1;
  }
  iVar4 = 1;
LAB_10018048:
  FUN_10018830(param_4,uVar9,uVar7,iVar4);
  FUN_10018830(param_4,uVar9,uVar12,iVar4 == 0);
  FUN_10018830(param_4,uVar12,uVar7,iVar4 == 0);
  iVar5 = 0x1b;
  if (iVar4 == 0) {
    puVar10 = local_d8;
    puVar13 = &DAT_1020e564;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar10 = local_6c;
  }
  else {
    puVar10 = local_6c;
    puVar13 = &DAT_1020e564;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar10 = local_d8;
  }
  puVar13 = &DAT_1020e5d0;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar5 = *(int *)(DAT_1020e68c + 4);
  iVar8 = *(int *)(DAT_1020e68c + 0x18);
  _DAT_1020e56c = iVar8 + (DAT_1020e5c8 * iVar5 + DAT_1020e564) * 2;
  _DAT_1020e570 = (DAT_1020e568 + iVar5) * 2;
  (**(code **)(&DAT_100217f0 + param_1))();
  iVar6 = 0x1b;
  if (iVar4 == 0) {
    piVar11 = local_144;
    piVar14 = &DAT_1020e564;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
    _DAT_1020e56c = iVar8 + (iStack_e0 * iVar5 + local_144[0]) * 2;
    _DAT_1020e570 = (DAT_1020e568 + iVar5) * 2;
  }
  else {
    piVar11 = local_144;
    piVar14 = &DAT_1020e5d0;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
  }
  (**(code **)(&DAT_100217f0 + param_1))();
  return;
}


/*
 * FUN_100181a0 at 100181a0
 * undefined FUN_100181a0(void)
 * Address ranges: 100181a0-100187dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100181a0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float local_8;
  float local_4;
  
  fVar9 = *param_2 - param_2[0x12];
  fVar4 = param_2[1] - param_2[0x13];
  fVar5 = param_2[9] - param_2[0x12];
  fVar6 = param_2[10] - param_2[0x13];
  fVar7 = fVar5 * fVar4 - fVar6 * fVar9;
  if (fVar7 == 0.0) {
    return 0;
  }
  fVar7 = 1.0 / fVar7;
  fVar10 = -(float10)fVar7;
  if (param_2[9] <= param_2[0x12]) {
    fVar8 = param_2[0x12];
  }
  else {
    fVar8 = param_2[9];
  }
  if (*param_2 <= fVar8) {
    if (param_2[9] <= param_2[0x12]) {
      local_8 = param_2[0x12];
    }
    else {
      local_8 = param_2[9];
    }
  }
  else {
    local_8 = *param_2;
  }
  if (param_2[0x12] <= param_2[9]) {
    fVar8 = param_2[0x12];
  }
  else {
    fVar8 = param_2[9];
  }
  if (fVar8 <= *param_2) {
    if (param_2[0x12] <= param_2[9]) {
      local_4 = param_2[0x12];
    }
    else {
      local_4 = param_2[9];
    }
  }
  else {
    local_4 = *param_2;
  }
  if (param_2[0x13] <= param_2[10]) {
    fVar8 = param_2[0x13];
  }
  else {
    fVar8 = param_2[10];
  }
  if (fVar8 <= param_2[1]) {
    if (param_2[0x13] <= param_2[10]) {
      fVar8 = param_2[0x13];
    }
    else {
      fVar8 = param_2[10];
    }
  }
  else {
    fVar8 = param_2[1];
  }
  if (param_2[10] <= param_2[0x13]) {
    fVar1 = param_2[0x13];
  }
  else {
    fVar1 = param_2[10];
  }
  if (param_2[1] <= fVar1) {
    if (param_2[10] <= param_2[0x13]) {
      fVar1 = param_2[0x13];
    }
    else {
      fVar1 = param_2[10];
    }
  }
  else {
    fVar1 = param_2[1];
  }
  fVar2 = fVar1 - fVar8;
  if (fVar1 - fVar8 < local_8 - local_4) {
    fVar2 = local_8 - local_4;
  }
  if (_DAT_1020e898 <= fVar2) {
    param_1[0x11] = 0.0;
  }
  else {
    param_1[0x11] = 1.4013e-45;
  }
  if ((DAT_1020e4e0 & 0x101) != 0) {
    if (param_2[0xb] <= param_2[0x14]) {
      fVar8 = param_2[0x14];
    }
    else {
      fVar8 = param_2[0xb];
    }
    if (param_2[2] <= fVar8) {
      if (param_2[0xb] <= param_2[0x14]) {
        local_8 = param_2[0x14];
      }
      else {
        local_8 = param_2[0xb];
      }
    }
    else {
      local_8 = param_2[2];
    }
    if (param_2[0x14] <= param_2[0xb]) {
      fVar8 = param_2[0x14];
    }
    else {
      fVar8 = param_2[0xb];
    }
    if (fVar8 <= param_2[2]) {
      if (param_2[0x14] <= param_2[0xb]) {
        fVar8 = param_2[0x14];
      }
      else {
        fVar8 = param_2[0xb];
      }
    }
    else {
      fVar8 = param_2[2];
    }
    if (local_8 - fVar8 <= 255.0) {
      if (80.0 <= fVar8) {
        if (500.0 < local_8) {
          local_8 = 500.0;
        }
        param_1[0x1e] = local_8;
      }
      else {
        param_1[0x1e] = fVar8;
      }
    }
    else {
      param_1[0x1e] = fVar8;
    }
    if (param_1[0x11] == 0.0) {
      *param_1 = param_1[0x1e] / param_2[2];
      param_1[1] = param_1[0x1e] / param_2[0xb];
      fVar8 = param_1[0x1e] / param_2[0x14];
    }
    else {
      fVar8 = 1.0 / param_1[0x1e];
      *param_1 = fVar8 * param_2[2];
      param_1[1] = fVar8 * param_2[0xb];
      fVar8 = fVar8 * param_2[0x14];
    }
    param_1[2] = fVar8;
    param_1[9] = (float)((((float10)param_1[1] - (float10)param_1[2]) * (float10)fVar4 -
                         ((float10)*param_1 - (float10)param_1[2]) * (float10)fVar6) *
                        (float10)fVar7);
    param_1[10] = (float)((((float10)param_1[1] - (float10)param_1[2]) * (float10)fVar9 -
                          ((float10)*param_1 - (float10)param_1[2]) * (float10)fVar5) * fVar10);
    fVar8 = (float)__ftol();
    param_1[0x18] = fVar8;
    fVar8 = (float)__ftol();
    param_1[0x1f] = fVar8;
    fVar10 = extraout_ST0;
  }
  if ((DAT_1020e4e0 & 1) != 0) {
    param_1[3] = param_3 * param_2[3] + 0.5;
    param_1[6] = param_4 * param_2[4] + 0.5;
    param_1[4] = param_3 * param_2[0xc] + 0.5;
    param_1[7] = param_4 * param_2[0xd] + 0.5;
    param_1[5] = param_3 * param_2[0x15] + 0.5;
    param_1[8] = param_4 * param_2[0x16] + 0.5;
    if (param_1[0x11] == 0.0) {
      param_1[3] = *param_1 * param_1[3];
      param_1[6] = param_1[6] * *param_1;
      param_1[4] = param_1[4] * param_1[1];
      param_1[7] = param_1[1] * param_1[7];
      param_1[5] = param_1[5] * param_1[2];
      param_1[8] = param_1[8] * param_1[2];
    }
    param_1[0xb] = (float)((((float10)param_1[4] - (float10)param_1[5]) * (float10)fVar4 -
                           ((float10)param_1[3] - (float10)param_1[5]) * (float10)fVar6) *
                          (float10)fVar7);
    param_1[0xc] = (float)((((float10)param_1[4] - (float10)param_1[5]) * (float10)fVar9 -
                           ((float10)param_1[3] - (float10)param_1[5]) * (float10)fVar5) * fVar10);
    param_1[0xd] = (float)((((float10)param_1[7] - (float10)param_1[8]) * (float10)fVar4 -
                           ((float10)param_1[6] - (float10)param_1[8]) * (float10)fVar6) *
                          (float10)fVar7);
    param_1[0xe] = (float)((((float10)param_1[7] - (float10)param_1[8]) * (float10)fVar9 -
                           ((float10)param_1[6] - (float10)param_1[8]) * (float10)fVar5) * fVar10);
    fVar8 = (float)__ftol();
    param_1[0x19] = fVar8;
    fVar8 = (float)__ftol();
    param_1[0x1a] = fVar8;
    fVar10 = extraout_ST0_00;
  }
  if ((DAT_1020e4e0 & 2) != 0) {
    fVar8 = param_2[5];
    fVar1 = param_2[0x17];
    fVar2 = param_2[0xe];
    fVar3 = param_2[0x17];
    param_1[0x12] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar4 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar6) * (float10)fVar7);
    param_1[0x13] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar9 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar5) * fVar10);
    fVar8 = param_2[6];
    fVar1 = param_2[0x18];
    fVar2 = param_2[0xf];
    fVar3 = param_2[0x18];
    param_1[0x14] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar4 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar6) * (float10)fVar7);
    param_1[0x15] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar9 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar5) * fVar10);
    fVar8 = param_2[7];
    fVar1 = param_2[0x19];
    fVar2 = param_2[0x10];
    fVar3 = param_2[0x19];
    param_1[0x16] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar4 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar6) * (float10)fVar7);
    param_1[0x17] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar9 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar5) * fVar10);
    fVar9 = (float)__ftol();
    param_1[0x1b] = fVar9;
    fVar9 = (float)__ftol();
    param_1[0x1c] = fVar9;
    fVar9 = (float)__ftol();
    param_1[0x1d] = fVar9;
  }
  if (param_1[0x11] != 0.0) {
    param_1[0x18] = (float)(((int)param_1[0x1f] >> 8) * ((int)param_1[0x18] >> 10));
    param_1[0x19] = (float)((int)param_1[0x19] >> 4);
    param_1[0x1a] = (float)((int)param_1[0x1a] >> 4);
    return 1;
  }
  fVar9 = ABS(param_1[9]) + ABS(param_1[10]);
  if ((DAT_1020e4e0 & 8) == 0) {
    if (fVar9 < 0.0005) {
      param_1[0xf] = 1.79366e-43;
      param_1[0x10] = 9.80909e-45;
      return 1;
    }
    if (fVar9 < 0.001) {
      param_1[0xf] = 8.96831e-44;
      param_1[0x10] = 8.40779e-45;
      return 1;
    }
    if (fVar9 < 0.005) {
      param_1[0xf] = 4.48416e-44;
      param_1[0x10] = 7.00649e-45;
      return 1;
    }
  }
  param_1[0xf] = 2.24208e-44;
  param_1[0x10] = 5.60519e-45;
  return 1;
}


/*
 * FUN_100187e0 at 100187e0
 * undefined FUN_100187e0(void)
 * Address ranges: 100187e0-1001882b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __fastcall FUN_100187e0(int param_1,int param_2,int *param_3,int *param_4)

{
  if (-1 < param_1) {
    *param_3 = param_1 / param_2;
    *param_4 = param_1 % param_2;
    return;
  }
  *param_3 = param_1 / param_2;
  *param_4 = -param_1 % param_2;
  if (-param_1 % param_2 != 0) {
    *param_3 = *param_3 + -1;
    *param_4 = param_2 - *param_4;
  }
  return;
}


/*
 * FUN_10018830 at 10018830
 * undefined FUN_10018830(void)
 * Address ranges: 10018830-10018b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __fastcall FUN_10018830(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000010;
  
  iVar1 = __ftol();
  iVar2 = __ftol();
  uVar3 = FUN_10018b80();
  param_1[0x19] = uVar3;
  iVar4 = FUN_10018b80();
  param_1[0x1a] = iVar4 - param_1[0x19];
  if (iVar4 - param_1[0x19] != 0) {
    if (iVar2 - iVar1 < 1) {
      param_1[1] = 0;
      uVar3 = __ftol();
      *param_1 = uVar3;
    }
    else {
      __ftol();
      __ftol();
      FUN_100187e0(param_1,param_1 + 6);
      FUN_100187e0(param_1 + 1,param_1 + 4);
      param_1[5] = (iVar2 - iVar1) * 0x10;
    }
    if (in_stack_00000010 != 0) {
      if ((DAT_1020e4e0 & 0x101) != 0) {
        uVar3 = __ftol();
        param_1[7] = uVar3;
        uVar3 = __ftol();
        param_1[8] = uVar3;
        param_1[0x13] = *(undefined4 *)(param_2 + 0x60);
      }
      if ((DAT_1020e4e0 & 1) != 0) {
        uVar3 = __ftol();
        param_1[9] = uVar3;
        uVar3 = __ftol();
        param_1[10] = uVar3;
        param_1[0x14] = *(undefined4 *)(param_2 + 100);
        uVar3 = __ftol();
        param_1[0xb] = uVar3;
        uVar3 = __ftol();
        param_1[0xc] = uVar3;
        param_1[0x15] = *(undefined4 *)(param_2 + 0x68);
      }
      if ((DAT_1020e4e0 & 2) != 0) {
        uVar3 = __ftol();
        param_1[0xd] = uVar3;
        uVar3 = __ftol();
        param_1[0xe] = uVar3;
        param_1[0x16] = *(undefined4 *)(param_2 + 0x6c);
        uVar3 = __ftol();
        param_1[0xf] = uVar3;
        uVar3 = __ftol();
        param_1[0x10] = uVar3;
        param_1[0x17] = *(undefined4 *)(param_2 + 0x70);
        uVar3 = __ftol();
        param_1[0x11] = uVar3;
        uVar3 = __ftol();
        param_1[0x12] = uVar3;
        param_1[0x18] = *(undefined4 *)(param_2 + 0x74);
      }
      if (*(int *)(param_2 + 0x44) != 0) {
        if ((DAT_1020e4e0 & 0x101) != 0) {
          param_1[7] = ((int)param_1[7] >> 10) * (*(int *)(param_2 + 0x7c) >> 8);
          param_1[8] = ((int)param_1[8] >> 10) * (*(int *)(param_2 + 0x7c) >> 8);
        }
        if ((DAT_1020e4e0 & 1) != 0) {
          param_1[9] = (int)param_1[9] >> 4;
          param_1[10] = (int)param_1[10] >> 4;
          param_1[0xb] = (int)param_1[0xb] >> 4;
          param_1[0xc] = (int)param_1[0xc] >> 4;
        }
      }
    }
  }
  return;
}


/*
 * FUN_10018b80 at 10018b80
 * undefined FUN_10018b80(void)
 * Address ranges: 10018b80-10018bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __fastcall FUN_10018b80(int param_1)

{
  uint uVar1;
  
  param_1 = param_1 + 0xf;
  if (-1 < param_1) {
    return (int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4;
  }
  uVar1 = -param_1 & 0x8000000f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
  }
  return ((int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4) - (uint)(uVar1 != 0);
}


/*
 * _strncmp at 10018bc0
 * int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * Address ranges: 10018bc0-10018bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}


/*
 * __global_unwind2 at 10018bf8
 * undefined __global_unwind2(void)
 * Address ranges: 10018bf8-10018c17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10018c10,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


/*
 * __local_unwind2 at 10018c3a
 * undefined __local_unwind2(void)
 * Address ranges: 10018c3a-10018ca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __local_unwind2  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_10018c18;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10018cce(0x101);
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/*
 * FUN_10018cce at 10018cce
 * undefined FUN_10018cce(void)
 * Address ranges: 10018cce-10018ce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018cce(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10021978 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10021974 = in_EAX;
  DAT_1002197c = unaff_EBP;
  return;
}


/*
 * FUN_10018dad at 10018dad
 * undefined FUN_10018dad(void)
 * Address ranges: 10018dad-10018dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018dad(int param_1)

{
  __local_unwind2(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}


/*
 * FUN_10018dc8 at 10018dc8
 * undefined FUN_10018dc8(void)
 * Address ranges: 10018dc8-10018e31;10018e3b-10018e89;10018e93-10018eb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018dc8(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100201b0;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_1020fd74 == 3) {
    ExceptionList = &local_14;
    FUN_1001a434(9);
    local_8 = 0;
    local_20 = FUN_10019572(param_1);
    if (local_20 != 0) {
      FUN_1001959d(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_10018e32();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1020fd74 != 2) goto LAB_10018e94;
    ExceptionList = &local_14;
    FUN_1001a434(9);
    local_8 = 1;
    local_28 = FUN_10019fd7(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_1001a02e(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_10018e8a();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_10018e94:
  HeapFree(DAT_1020fd70,0,param_1);
  ExceptionList = local_14;
  return;
}


/*
 * FUN_10018e32 at 10018e32
 * undefined FUN_10018e32(void)
 * Address ranges: 10018e32-10018e3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018e32(void)

{
  FUN_1001a495(9);
  return;
}


/*
 * FUN_10018e8a at 10018e8a
 * undefined FUN_10018e8a(void)
 * Address ranges: 10018e8a-10018e92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018e8a(void)

{
  FUN_1001a495(9);
  return;
}


/*
 * _malloc at 10018eb1
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 10018eb1-10018ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10025d10);
  return pvVar1;
}


/*
 * __nh_malloc at 10018ec3
 * void * __cdecl __nh_malloc(size_t _Size, int _NhFlag)
 * Address ranges: 10018ec3-10018eee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __nh_malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10018eef(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1001a4aa(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


/*
 * FUN_10018eef at 10018eef
 * undefined FUN_10018eef(void)
 * Address ranges: 10018eef-10018f55;10018f5f-10018fb1;10018fbe-10018fea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018eef(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100201c8;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  if (DAT_1020fd74 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1020fd6c) {
      ExceptionList = &local_14;
      FUN_1001a434(9);
      local_8 = 0;
      iVar1 = FUN_100198c6(param_1);
      local_8 = 0xffffffff;
      FUN_10018f56();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1020fd74 == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_100239c4) {
        ExceptionList = &local_14;
        FUN_1001a434(9);
        local_8 = 1;
        iVar1 = FUN_1001a073(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10018fb5();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10018fce;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_10018fce:
  HeapAlloc(DAT_1020fd70,0,dwBytes);
  ExceptionList = local_14;
  return;
}


/*
 * FUN_10018f56 at 10018f56
 * undefined FUN_10018f56(void)
 * Address ranges: 10018f56-10018f5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018f56(void)

{
  FUN_1001a495(9);
  return;
}


/*
 * FUN_10018fb5 at 10018fb5
 * undefined FUN_10018fb5(void)
 * Address ranges: 10018fb5-10018fbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10018fb5(void)

{
  FUN_1001a495(9);
  return;
}


/*
 * FUN_10018feb at 10018feb
 * undefined FUN_10018feb(void)
 * Address ranges: 10018feb-1001903b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10018feb(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_1001a5dd(&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1001a4c5(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}


/*
 * FUN_1001903c at 1001903c
 * undefined FUN_1001903c(void)
 * Address ranges: 1001903c-10019052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001903c(void)

{
  FUN_10019054();
  _DAT_10025c90 = FUN_1001b175();
  FUN_1001b125();
  return;
}


/*
 * FUN_10019054 at 10019054
 * undefined FUN_10019054(void)
 * Address ranges: 10019054-1001908b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10019054(void)

{
  PTR___fptrap_10023a94 = &LAB_1001b1f8;
  PTR___fptrap_10023a90 = __cfltcvt;
  PTR___fptrap_10023a98 = __fassign;
  PTR___fptrap_10023a9c = FUN_1001b19e;
  PTR___fptrap_10023aa0 = &LAB_1001b246;
  PTR___fptrap_10023aa4 = __cfltcvt;
  return;
}


/*
 * FUN_1001908c at 1001908c
 * undefined FUN_1001908c(void)
 * Address ranges: 1001908c-100190dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001908c(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_1001a5dd(&local_24,param_2,&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1001a4c5(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}


/*
 * __ftol at 100190e0
 * undefined __ftol(void)
 * Address ranges: 100190e0-10019106
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ftol  Library: Visual Studio
 */


/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


/*
 * FUN_10019107 at 10019107
 * undefined FUN_10019107(void)
 * Address ranges: 10019107-100191df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10019107(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10025d1c = GetVersion();
    iVar1 = FUN_10019425(1);
    if (iVar1 != 0) {
      _DAT_10025d28 = DAT_10025d1c >> 8 & 0xff;
      _DAT_10025d24 = DAT_10025d1c & 0xff;
      DAT_10025d1c = DAT_10025d1c >> 0x10;
      _DAT_10025d20 = _DAT_10025d24 * 0x100 + _DAT_10025d28;
      iVar1 = FUN_1001b6e2();
      if (iVar1 != 0) {
        DAT_1020fd78 = GetCommandLineA();
        DAT_10025c98 = FUN_1001bd84();
        FUN_1001b86e();
        FUN_1001bb37();
        FUN_1001ba7e();
        FUN_1001b5c4();
        DAT_10025c94 = DAT_10025c94 + 1;
        goto LAB_100191da;
      }
      FUN_10019482();
    }
LAB_10019167:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10025c94 < 1) goto LAB_10019167;
      DAT_10025c94 = DAT_10025c94 + -1;
      if (DAT_10025d54 == 0) {
        FUN_1001b602();
      }
      FUN_1001ba2a();
      FUN_1001b736();
      FUN_10019482();
    }
    else if (param_2 == 3) {
      FUN_1001b7ce(0);
    }
LAB_100191da:
    uVar2 = 1;
  }
  return uVar2;
}


/*
 * entry at 100191e0
 * undefined entry(void)
 * Address ranges: 100191e0-1001927c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10025c94;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10019228;
    if ((DAT_1020fd7c != (code *)0x0) &&
       (iVar2 = (*DAT_1020fd7c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10019107(param_1,param_2,param_3);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10019228:
  iVar2 = FUN_1001beb6(param_1,param_2,param_3);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10019107(param_1,0,param_3);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10019107(param_1,param_2,param_3);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1020fd7c != (code *)0x0) {
      iVar2 = (*DAT_1020fd7c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


/*
 * __amsg_exit at 1001927d
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 1001927d-100192ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10025ca0 == 1) || ((DAT_10025ca0 == 0 && (DAT_10025ca4 == 1)))) {
    FUN_1001bebc();
  }
  FUN_1001bef5(param_1);
  (*(code *)PTR___exit_10021994)(0xff);
  return;
}


/*
 * FUN_100192b0 at 100192b0
 * undefined FUN_100192b0(void)
 * Address ranges: 100192b0-100192dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100192b0(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}


/*
 * FUN_100192dd at 100192dd
 * undefined FUN_100192dd(void)
 * Address ranges: 100192dd-10019424
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_100192dd(void)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  char *pcVar5;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_1001c3c0();
  local_9c = 0x94;
  BVar2 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar2 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = '7';
    aCStackY_18[1] = -0x6d;
    aCStackY_18[2] = '\x01';
    aCStackY_18[3] = '\x10';
    DVar3 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar3 != 0) {
      pcVar5 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar5;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar5 = cVar1 + -0x20;
        }
        pcVar5 = pcVar5 + 1;
        local_1230[0] = *pcVar5;
      }
      aCStackY_18[0] = 'u';
      aCStackY_18[1] = -0x6d;
      aCStackY_18[2] = '\x01';
      aCStackY_18[3] = '\x10';
      iVar4 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar4 == 0) {
        pcVar5 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x69;
        aCStackY_18[1] = -0x6d;
        aCStackY_18[2] = '\x01';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar5 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar5;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar5 = cVar1 + -0x20;
          }
          pcVar5 = pcVar5 + 1;
          local_1a0[0] = *pcVar5;
        }
        pcVar5 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar5 != (char *)0x0) && (pcVar5 = _strchr(pcVar5,0x2c), pcVar5 != (char *)0x0)) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          if (*pcVar5 == ';') {
            *pcVar5 = '\0';
          }
          else {
            pcVar5 = pcVar5 + 1;
          }
          cVar1 = *pcVar5;
        }
        aCStackY_18[0] = -3;
        aCStackY_18[1] = -0x6d;
        aCStackY_18[2] = '\x01';
        aCStackY_18[3] = '\x10';
        iVar4 = FUN_1001c048();
        if (iVar4 == 2) {
          return 2;
        }
        if (iVar4 == 3) {
          return 3;
        }
        if (iVar4 == 1) {
          return 1;
        }
      }
    }
    FUN_100192b0();
    iVar4 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar4 = 1;
  }
  return iVar4;
}


/*
 * FUN_10019425 at 10019425
 * undefined FUN_10019425(void)
 * Address ranges: 10019425-10019481
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10019425(int param_1)

{
  int iVar1;
  
  DAT_1020fd70 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1020fd70 != (HANDLE)0x0) {
    DAT_1020fd74 = FUN_100192dd();
    if (DAT_1020fd74 == 3) {
      iVar1 = FUN_1001952a(0x3f8);
    }
    else {
      if (DAT_1020fd74 != 2) {
        return 1;
      }
      iVar1 = FUN_10019d7b();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1020fd70);
  }
  return 0;
}


/*
 * FUN_10019482 at 10019482
 * undefined FUN_10019482(void)
 * Address ranges: 10019482-10019529
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10019482(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1020fd74 == 3) {
    iVar1 = 0;
    if (0 < DAT_1020fd64) {
      puVar2 = (undefined4 *)((int)DAT_1020fd68 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1020fd70,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1020fd64);
    }
    HeapFree(DAT_1020fd70,0,DAT_1020fd68);
  }
  else if (DAT_1020fd74 == 2) {
    ppuVar3 = &PTR_LOOP_100219a0;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_100219a0);
  }
  HeapDestroy(DAT_1020fd70);
  return;
}


/*
 * FUN_1001952a at 1001952a
 * undefined FUN_1001952a(void)
 * Address ranges: 1001952a-10019571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001952a(undefined4 param_1)

{
  DAT_1020fd68 = HeapAlloc(DAT_1020fd70,0,0x140);
  if (DAT_1020fd68 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1020fd60 = 0;
  DAT_1020fd64 = 0;
  DAT_1020fd5c = DAT_1020fd68;
  DAT_1020fd6c = param_1;
  DAT_1020fd54 = 0x10;
  return 1;
}


/*
 * FUN_10019572 at 10019572
 * undefined FUN_10019572(void)
 * Address ranges: 10019572-1001959c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_10019572(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1020fd68;
  while( true ) {
    if (DAT_1020fd68 + DAT_1020fd64 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


/*
 * FUN_1001959d at 1001959d
 * undefined FUN_1001959d(void)
 * Address ranges: 1001959d-100198c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001959d(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) + -1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) + -1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) + -1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_1020fd60 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1020fd58 * 0x8000 + DAT_1020fd60[3]),0x8000,0x4000);
        DAT_1020fd60[2] = DAT_1020fd60[2] | 0x80000000U >> ((byte)DAT_1020fd58 & 0x1f);
        *(undefined4 *)(DAT_1020fd60[4] + 0xc4 + DAT_1020fd58 * 4) = 0;
        *(char *)(DAT_1020fd60[4] + 0x43) = *(char *)(DAT_1020fd60[4] + 0x43) + -1;
        if (*(char *)(DAT_1020fd60[4] + 0x43) == '\0') {
          DAT_1020fd60[1] = DAT_1020fd60[1] & 0xfffffffe;
        }
        if (DAT_1020fd60[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1020fd60[3],0,0x8000);
          HeapFree(DAT_1020fd70,0,(LPVOID)DAT_1020fd60[4]);
          FUN_1001c3f0(DAT_1020fd60,DAT_1020fd60 + 5,
                       (DAT_1020fd64 * 0x14 - (int)DAT_1020fd60) + -0x14 + DAT_1020fd68);
          DAT_1020fd64 = DAT_1020fd64 + -1;
          if (DAT_1020fd60 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1020fd5c = DAT_1020fd68;
        }
      }
      DAT_1020fd60 = param_1;
      DAT_1020fd58 = uVar14;
    }
  }
  return;
}


/*
 * FUN_100198c6 at 100198c6
 * undefined FUN_100198c6(void)
 * Address ranges: 100198c6-10019bce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * FUN_100198c6(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_1020fd68 + DAT_1020fd64 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_1020fd5c;
  if (iVar8 < 0x20) {
    local_10 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar12 = DAT_1020fd68;
  if (param_1 == puVar9) {
    for (; (puVar12 < DAT_1020fd5c && ((puVar12[1] & local_c) == 0 && (*puVar12 & local_10) == 0));
        puVar12 = puVar12 + 5) {
    }
    param_1 = puVar12;
    if (puVar12 == DAT_1020fd5c) {
      for (; (puVar12 < puVar9 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
      }
      puVar13 = DAT_1020fd68;
      param_1 = puVar12;
      if (puVar12 == puVar9) {
        for (; (puVar13 < DAT_1020fd5c && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
        }
        param_1 = puVar13;
        if ((puVar13 == DAT_1020fd5c) && (param_1 = (uint *)FUN_10019bcf(), param_1 == (uint *)0x0))
        {
          return (int *)0x0;
        }
      }
      uVar5 = FUN_10019c80(param_1);
      *(undefined4 *)param_1[4] = uVar5;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar12 = puVar9 + 0x21;
        local_8 = local_8 + 1;
        puVar9 = puVar9 + 1;
      } while ((*puVar12 & local_c) == 0 && (local_10 & *puVar9) == 0);
    }
  }
  iVar8 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar8 = iVar8 + 1;
  }
  piVar11 = (int *)piVar2[iVar8 * 2 + 1];
  iVar10 = *piVar11 - uVar7;
  iVar15 = (iVar10 >> 4) + -1;
  if (0x3f < iVar15) {
    iVar15 = 0x3f;
  }
  DAT_1020fd5c = param_1;
  if (iVar15 != iVar8) {
    if (piVar11[1] == piVar11[2]) {
      if (iVar8 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar8 + 4);
        uVar14 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar4[local_8 + 0x11] = uVar14 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar14;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar8 + 4);
        uVar14 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar14;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar14;
        }
      }
    }
    *(int *)(piVar11[2] + 4) = piVar11[1];
    *(int *)(piVar11[1] + 8) = piVar11[2];
    if (iVar10 == 0) goto LAB_10019b8c;
    piVar11[1] = piVar2[iVar15 * 2 + 1];
    piVar11[2] = (int)(piVar2 + iVar15 * 2);
    (piVar2 + iVar15 * 2)[1] = (int)piVar11;
    *(int **)(piVar11[1] + 8) = piVar11;
    if (piVar11[1] == piVar11[2]) {
      cVar3 = *(char *)(iVar15 + 4 + (int)piVar4);
      bVar6 = (byte)iVar15;
      if (iVar15 < 0x20) {
        *(char *)(iVar15 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        *(char *)(iVar15 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar11 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar11) = iVar10;
  }
LAB_10019b8c:
  piVar11 = (int *)((int)piVar11 + iVar10);
  *piVar11 = uVar7 + 1;
  *(uint *)((int)piVar11 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar2;
  *piVar2 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1020fd60)) && (local_8 == DAT_1020fd58)) {
    DAT_1020fd60 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar11 + 1;
}


/*
 * FUN_10019bcf at 10019bcf
 * undefined FUN_10019bcf(void)
 * Address ranges: 10019bcf-10019c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_10019bcf(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1020fd64 == DAT_1020fd54) {
    pvVar2 = HeapReAlloc(DAT_1020fd70,0,DAT_1020fd68,(DAT_1020fd54 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1020fd54 = DAT_1020fd54 + 0x10;
    DAT_1020fd68 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1020fd68 + DAT_1020fd64 * 0x14);
  pvVar2 = HeapAlloc(DAT_1020fd70,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1020fd64 = DAT_1020fd64 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1020fd70,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


/*
 * FUN_10019c80 at 10019c80
 * undefined FUN_10019c80(void)
 * Address ranges: 10019c80-10019d7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_10019c80(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}


/*
 * FUN_10019d7b at 10019d7b
 * undefined FUN_10019d7b(void)
 * Address ranges: 10019d7b-10019ebe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined ** FUN_10019d7b(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_100219b0 == -1) {
    lpMem = &PTR_LOOP_100219a0;
  }
  else {
    lpMem = HeapAlloc(DAT_1020fd70,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_100219a0) {
        if (PTR_LOOP_100219a0 == (undefined *)0x0) {
          PTR_LOOP_100219a0 = (undefined *)&PTR_LOOP_100219a0;
        }
        if (PTR_LOOP_100219a4 == (undefined *)0x0) {
          PTR_LOOP_100219a4 = (undefined *)&PTR_LOOP_100219a0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_100219a0;
        lpMem[1] = PTR_LOOP_100219a4;
        PTR_LOOP_100219a4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_100219a0) {
    HeapFree(DAT_1020fd70,0,lpMem);
  }
  return (undefined **)0x0;
}


/*
 * FUN_10019ebf at 10019ebf
 * undefined FUN_10019ebf(void)
 * Address ranges: 10019ebf-10019f14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10019ebf(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100239c0 == param_1) {
    PTR_LOOP_100239c0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100219a0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1020fd70,0,param_1);
    return;
  }
  DAT_100219b0 = 0xffffffff;
  return;
}


/*
 * FUN_10019f15 at 10019f15
 * undefined FUN_10019f15(void)
 * Address ranges: 10019f15-10019fd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10019f15(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int local_8;
  
  puVar4 = PTR_LOOP_100219a4;
  do {
    puVar5 = puVar4;
    if (*(int *)(puVar4 + 0x10) != -1) {
      local_8 = 0;
      piVar2 = (int *)(puVar4 + 0x2010);
      iVar3 = 0x3ff000;
      do {
        if (*piVar2 == 0xf0) {
          BVar1 = VirtualFree((LPVOID)(iVar3 + *(int *)(puVar4 + 0x10)),0x1000,0x4000);
          if (BVar1 != 0) {
            *piVar2 = -1;
            DAT_10025ca8 = DAT_10025ca8 + -1;
            if ((*(int **)(puVar4 + 0xc) == (int *)0x0) || (piVar2 < *(int **)(puVar4 + 0xc))) {
              *(int **)(puVar4 + 0xc) = piVar2;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        piVar2 = piVar2 + -2;
      } while (-1 < iVar3);
      puVar5 = *(undefined **)(puVar4 + 4);
      if ((local_8 != 0) && (*(int *)(puVar4 + 0x18) == -1)) {
        piVar2 = (int *)(puVar4 + 0x20);
        iVar3 = 1;
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10019ebf(puVar4);
        }
      }
    }
    if ((puVar5 == PTR_LOOP_100219a4) || (puVar4 = puVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}


/*
 * FUN_10019fd7 at 10019fd7
 * undefined FUN_10019fd7(void)
 * Address ranges: 10019fd7-1001a02d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_10019fd7(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_100219a0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_100219a0) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}


/*
 * FUN_1001a02e at 1001a02e
 * undefined FUN_1001a02e(void)
 * Address ranges: 1001a02e-1001a072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001a02e(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10025ca8 = DAT_10025ca8 + 1, DAT_10025ca8 == 0x20)) {
    FUN_10019f15(0x10);
  }
  return;
}


/*
 * FUN_1001a073 at 1001a073
 * undefined FUN_1001a073(void)
 * Address ranges: 1001a073-1001a27a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

int * FUN_1001a073(uint param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar8 = (int *)PTR_LOOP_100239c0;
  do {
    if (piVar8[4] != -1) {
      piVar5 = (int *)piVar8[2];
      iVar3 = ((int)piVar5 + (-0x18 - (int)piVar8) >> 3) * 0x1000 + piVar8[4];
      if (piVar5 < piVar8 + 0x806) {
        do {
          if (((int)param_1 <= *piVar5) && (param_1 < (uint)piVar5[1])) {
            piVar4 = (int *)FUN_1001a27b(iVar3,*piVar5,param_1);
            if (piVar4 != (int *)0x0) goto LAB_1001a13e;
            piVar5[1] = param_1;
          }
          piVar5 = piVar5 + 2;
          iVar3 = iVar3 + 0x1000;
        } while (piVar5 < piVar8 + 0x806);
      }
      piVar1 = (int *)piVar8[2];
      iVar3 = piVar8[4];
      for (piVar5 = piVar8 + 6; piVar5 < piVar1; piVar5 = piVar5 + 2) {
        if (((int)param_1 <= *piVar5) && (param_1 < (uint)piVar5[1])) {
          piVar4 = (int *)FUN_1001a27b(iVar3,*piVar5,param_1);
          if (piVar4 != (int *)0x0) {
LAB_1001a13e:
            PTR_LOOP_100239c0 = (undefined *)piVar8;
            *piVar5 = *piVar5 - param_1;
            piVar8[2] = (int)piVar5;
            return piVar4;
          }
          piVar5[1] = param_1;
        }
        iVar3 = iVar3 + 0x1000;
      }
    }
    piVar8 = (int *)*piVar8;
    if (piVar8 == (int *)PTR_LOOP_100239c0) {
      ppuVar9 = &PTR_LOOP_100219a0;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_100219a0) {
          puVar6 = (undefined *)FUN_10019d7b();
          if (puVar6 == (undefined *)0x0) {
            return (int *)0x0;
          }
          piVar8 = *(int **)(puVar6 + 0x10);
          *(char *)(piVar8 + 2) = (char)param_1;
          PTR_LOOP_100239c0 = puVar6;
          *piVar8 = (int)piVar8 + param_1 + 8;
          piVar8[1] = 0xf0 - param_1;
          *(uint *)(puVar6 + 0x18) = *(int *)(puVar6 + 0x18) - (param_1 & 0xff);
          return piVar8 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar8 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar6 = *ppuVar2;
      ppuVar7 = ppuVar2;
      for (; (puVar6 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar7 = ppuVar7 + 2;
        puVar6 = *ppuVar7;
      }
      piVar5 = VirtualAlloc(piVar8,local_8 << 0xc,0x1000,4);
      if (piVar5 != piVar8) {
        return (int *)0x0;
      }
      _memset(piVar8,local_8 << 0xc,0);
      ppuVar7 = ppuVar2;
      if (0 < local_8) {
        piVar5 = piVar8 + 1;
        do {
          *(undefined1 *)(piVar5 + 0x3d) = 0xff;
          piVar5[-1] = (int)(piVar5 + 1);
          *piVar5 = 0xf0;
          *ppuVar7 = (undefined *)0xf0;
          ppuVar7[1] = (undefined *)0xf1;
          piVar5 = piVar5 + 0x400;
          ppuVar7 = ppuVar7 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar7 < ppuVar9 + 0x806 && (*ppuVar7 != (undefined *)0xffffffff));
          ppuVar7 = ppuVar7 + 2) {
      }
      PTR_LOOP_100239c0 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar7 < ppuVar9 + 0x806) & (uint)ppuVar7);
      *(char *)(piVar8 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar8[1] = piVar8[1] - param_1;
      *piVar8 = (int)piVar8 + param_1 + 8;
      return piVar8 + 0x40;
    }
  } while( true );
}


/*
 * FUN_1001a27b at 1001a27b
 * undefined FUN_1001a27b(void)
 * Address ranges: 1001a27b-1001a39e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001a27b(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_1001a38e;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_1001a38e:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}


/*
 * FUN_1001a39f at 1001a39f
 * undefined FUN_1001a39f(void)
 * Address ranges: 1001a39f-1001a3c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001a39f(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10023a0c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239fc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239ec);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239cc);
  return;
}


/*
 * FUN_1001a3c8 at 1001a3c8
 * undefined FUN_1001a3c8(void)
 * Address ranges: 1001a3c8-1001a433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001a3c8(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100239c8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10023a0c)) && (ppuVar1 != &PTR_DAT_100239fc)) &&
       ((ppuVar1 != &PTR_DAT_100239ec && (ppuVar1 != &PTR_DAT_100239cc)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10018dc8(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10023a88);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239ec);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239fc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10023a0c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100239cc);
  return;
}


/*
 * FUN_1001a434 at 1001a434
 * undefined FUN_1001a434(void)
 * Address ranges: 1001a434-1001a494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001a434(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100239c8 + param_1;
  if ((&DAT_100239c8)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1001a434(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10018dc8();
    }
    FUN_1001a495(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


/*
 * FUN_1001a495 at 1001a495
 * undefined FUN_1001a495(void)
 * Address ranges: 1001a495-1001a4a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001a495(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100239c8)[param_1]);
  return;
}


/*
 * FUN_1001a4aa at 1001a4aa
 * undefined FUN_1001a4aa(void)
 * Address ranges: 1001a4aa-1001a4c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001a4aa(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10025d14 != (code *)0x0) {
    iVar1 = (*DAT_10025d14)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/*
 * FUN_1001a4c5 at 1001a4c5
 * undefined FUN_1001a4c5(void)
 * Address ranges: 1001a4c5-1001a5dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001a4c5(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_1001a5d1:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1001a5d1;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10023b90 && (piVar4 != (int *)&DAT_10023bb0)) ||
        (iVar5 = FUN_1001ca94(uVar2), iVar5 == 0)))) {
      FUN_1001ca50(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      iVar5 = 1;
      param_2 = (int *)FUN_1001c860(uVar2,&param_1,1);
    }
    else {
      iVar3 = piVar4[2];
      iVar5 = *piVar4 - iVar3;
      *piVar4 = iVar3 + 1;
      piVar4[1] = piVar4[6] + -1;
      if (iVar5 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10023ab0;
        }
        else {
          puVar6 = (undefined *)((&DAT_1020fc40)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1001c788(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1001c860(uVar2,iVar3,iVar5);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == (int *)iVar5) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}


/*
 * FUN_1001a5dd at 1001a5dd
 * undefined FUN_1001a5dd(void)
 * Address ranges: 1001a5dd-1001acfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001a5dd(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  short *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (byte)"__GLOBAL_HEAP_SELECTED"[(char)bVar9 + 0x10] & 0xf;
    }
    local_34 = (int)(char)(&DAT_10020210)[uVar3 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_1001a64b_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_10023df0[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_1001ad1e((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_1001ad1e((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_1001adbc(&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_1001adbc(&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto switchD_1001a64b_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      psVar5 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_1001aa5c:
              local_30 = 7;
LAB_1001aa63:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = 0x30;
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_1001aacd;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_1001a80a;
                }
                goto LAB_1001abe7;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_1001a86b;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_1001a898:
            if ((local_8 & 0x810) == 0) {
              local_24c[0] = FUN_1001adbc(&param_3);
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar6 = FUN_1001add9();
              local_10 = (undefined1 *)FUN_1001cc9b(local_24c,uVar6);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            psVar5 = (short *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar4 = (short *)FUN_1001adbc(&param_3);
            if ((psVar4 == (short *)0x0) ||
               (psVar5 = *(short **)(psVar4 + 2), psVar5 == (short *)0x0)) {
              local_c = (short *)PTR_DAT_10023a88;
              psVar5 = (short *)PTR_DAT_10023a88;
              goto LAB_1001a9dd;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar4;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar4 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_1001a898;
            if (bVar9 == 100) goto LAB_1001aac2;
          }
        }
        else {
LAB_1001a86b:
          local_8 = local_8 | 0x40;
          psVar5 = (short *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = psVar5;
          (*(code *)PTR___fptrap_10023a90)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar3 = local_8 & 0x80;
          if ((uVar3 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_10023a9c)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar3 == 0)) {
            (*(code *)PTR___fptrap_10023a94)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            psVar5 = (short *)(local_24c + 1);
            local_c = psVar5;
          }
LAB_1001a9dd:
          local_10 = (undefined1 *)_strlen((char *)psVar5);
          psVar5 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_1001aac2:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_1001adbc(&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_1001aacd;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_1001aa5c;
          }
          if (bVar9 == 0x73) {
LAB_1001a80a:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            psVar4 = (short *)FUN_1001adbc(&param_3);
            if ((local_8 & 0x810) == 0) {
              psVar5 = psVar4;
              if (psVar4 == (short *)0x0) {
                psVar4 = (short *)PTR_DAT_10023a88;
                psVar5 = (short *)PTR_DAT_10023a88;
              }
              for (; (iVar10 != 0 && ((char)*psVar4 != '\0')); psVar4 = (short *)((int)psVar4 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)psVar4 - (int)psVar5);
            }
            else {
              if (psVar4 == (short *)0x0) {
                psVar4 = (short *)PTR_DAT_10023a8c;
              }
              local_28 = 1;
              for (psVar5 = psVar4; (iVar10 != 0 && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)psVar5 - (int)psVar4 >> 1);
              psVar5 = psVar4;
            }
            goto LAB_1001abe7;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_1001abe7;
            local_30 = 0x27;
            goto LAB_1001aa63;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_1001aacd:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar3 = FUN_1001adbc(&param_3);
              uVar12 = (ulonglong)uVar3;
              goto LAB_1001ab20;
            }
            uVar3 = FUN_1001adbc(&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar3 = FUN_1001adbc(&param_3);
            uVar3 = uVar3 & 0xffff;
          }
          else {
            sVar2 = FUN_1001adbc(&param_3);
            uVar3 = (uint)sVar2;
          }
          uVar12 = (ulonglong)(int)uVar3;
        }
        else {
          uVar12 = FUN_1001adc9(&param_3);
        }
LAB_1001ab20:
        if ((((local_8 & 0x40) != 0) && ((longlong)uVar12 < 0x100000000)) && ((longlong)uVar12 < 0))
        {
          uVar12 = CONCAT44(-((int)(uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),-(int)uVar12);
          local_8 = local_8 | 0x100;
        }
        iVar10 = (int)(uVar12 >> 0x20);
        if ((local_8 & 0x8000) == 0) {
          iVar10 = 0;
        }
        lVar13 = CONCAT44(iVar10,(int)uVar12);
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar12 == 0 && iVar10 == 0) {
          local_20 = 0;
        }
        local_c = (short *)&local_4d;
        while ((iVar10 = local_14 + -1, 0 < local_14 || (lVar13 != 0))) {
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (int)local_10;
          local_14 = iVar10;
          iVar10 = __aullrem(lVar13,local_10,local_40);
          iVar10 = iVar10 + 0x30;
          lVar13 = __aulldiv(lVar13,local_44,local_40);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          psVar5 = (short *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = psVar5;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        psVar5 = (short *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)psVar5 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          psVar5 = local_c;
        }
      }
LAB_1001abe7:
      local_c = psVar5;
      uVar3 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_1001ac1f;
              local_1a = 0x20;
            }
            else {
              local_1a = 0x2b;
            }
          }
          else {
            local_1a = 0x2d;
          }
          local_20 = 1;
        }
LAB_1001ac1f:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_1001ad53(0x20,iVar10,param_1,&local_18);
        }
        FUN_1001ad84(&local_1a,local_20,param_1,&local_18);
        if (((uVar3 & 8) != 0) && ((uVar3 & 4) == 0)) {
          FUN_1001ad53(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar11 = local_10, psVar5 = local_c, (int)local_10 < 1)) {
          FUN_1001ad84(local_c,local_10,param_1,&local_18);
        }
        else {
          do {
            puVar11 = puVar11 + -1;
            iVar8 = FUN_1001cc9b(local_3c,*psVar5);
            if (iVar8 < 1) break;
            FUN_1001ad84(local_3c,iVar8,param_1,&local_18);
            psVar5 = psVar5 + 1;
          } while (puVar11 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_1001ad53(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}


/*
 * FUN_1001ad1e at 1001ad1e
 * undefined FUN_1001ad1e(void)
 * Address ranges: 1001ad1e-1001ad52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001ad1e(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    param_1 = FUN_1001a4c5(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 & 0xff;
  }
  if (param_1 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


/*
 * FUN_1001ad53 at 1001ad53
 * undefined FUN_1001ad53(void)
 * Address ranges: 1001ad53-1001ad83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001ad53(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1001ad1e(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_1001ad84 at 1001ad84
 * undefined FUN_1001ad84(void)
 * Address ranges: 1001ad84-1001adbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001ad84(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1001ad1e((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_1001adbc at 1001adbc
 * undefined FUN_1001adbc(void)
 * Address ranges: 1001adbc-1001adc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001adbc(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


/*
 * FUN_1001adc9 at 1001adc9
 * undefined FUN_1001adc9(void)
 * Address ranges: 1001adc9-1001add8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1001adc9(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


/*
 * FUN_1001add9 at 1001add9
 * undefined FUN_1001add9(void)
 * Address ranges: 1001add9-1001ade6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001add9(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


/*
 * FUN_1001adf0 at 1001adf0
 * undefined FUN_1001adf0(void)
 * Address ranges: 1001adf0-1001ae4a;1001ae4c-1001ae52;1001ae60-1001ae88;1001ae8c-1001aeae;1001aeb0-1001aec8;1001aeec-1001af35;1001af48-1001af4e;1001af50-1001af5a;1001af5c-1001af6c;1001af70-1001af86;1001af88-1001afad;1001afb0-1001afb8;1001afbc-1001afda;1001afe8-1001b004;1001b008-1001b02e;1001b030-1001b060;1001b084-1001b0cd;1001b0e0-1001b0e6;1001b0e8-1001b0f4;1001b0f8-1001b10a;1001b10c-1001b124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_1001adf0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar2 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar2 & 3) == 0) {
      uVar1 = param_3 >> 2;
      param_3 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar2 = *param_2;
          param_2 = param_2 + -1;
          puVar2 = puVar2 + -1;
        }
        switch(param_3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1001afa7_caseD_2;
        case 3:
          goto switchD_1001afa7_caseD_3;
        }
        goto switchD_1001afa7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1001afa7_caseD_0;
      case 1:
        goto switchD_1001afa7_caseD_1;
      case 2:
        goto switchD_1001afa7_caseD_2;
      case 3:
        goto switchD_1001afa7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar2 & 3);
        switch((uint)puVar2 & 3) {
        case 1:
          param_3 = uVar1 & 3;
          *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          uVar1 = uVar1 >> 2;
          puVar2 = (undefined4 *)((int)puVar2 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1001afa7_caseD_2;
            case 3:
              goto switchD_1001afa7_caseD_3;
            }
            goto switchD_1001afa7_caseD_1;
          }
          break;
        case 2:
          param_3 = uVar1 & 3;
          *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar2 = (undefined4 *)((int)puVar2 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1001afa7_caseD_2;
            case 3:
              goto switchD_1001afa7_caseD_3;
            }
            goto switchD_1001afa7_caseD_1;
          }
          break;
        case 3:
          param_3 = uVar1 & 3;
          *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
          *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar2 = (undefined4 *)((int)puVar2 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1001afa7_caseD_2;
            case 3:
              goto switchD_1001afa7_caseD_3;
            }
            goto switchD_1001afa7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar2[7 - uVar1] = param_2[7 - uVar1];
    case 6:
      puVar2[6 - uVar1] = param_2[6 - uVar1];
    case 5:
      puVar2[5 - uVar1] = param_2[5 - uVar1];
    case 4:
      puVar2[4 - uVar1] = param_2[4 - uVar1];
    case 3:
      puVar2[3 - uVar1] = param_2[3 - uVar1];
    case 2:
      puVar2[2 - uVar1] = param_2[2 - uVar1];
    case 1:
      puVar2[1 - uVar1] = param_2[1 - uVar1];
      param_2 = param_2 + -uVar1;
      puVar2 = puVar2 + -uVar1;
    }
    switch(param_3) {
    case 1:
switchD_1001afa7_caseD_1:
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
      return param_1;
    case 2:
switchD_1001afa7_caseD_2:
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
      return param_1;
    case 3:
switchD_1001afa7_caseD_3:
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
      *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
      return param_1;
    }
switchD_1001afa7_caseD_0:
    return param_1;
  }
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    param_3 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      switch(param_3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1001ae25_caseD_2;
      case 3:
        goto switchD_1001ae25_caseD_3;
      }
      goto switchD_1001ae25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1001ae25_caseD_0;
    case 1:
      goto switchD_1001ae25_caseD_1;
    case 2:
      goto switchD_1001ae25_caseD_2;
    case 3:
      goto switchD_1001ae25_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        param_3 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar2 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1001ae25_caseD_2;
          case 3:
            goto switchD_1001ae25_caseD_3;
          }
          goto switchD_1001ae25_caseD_1;
        }
        break;
      case 2:
        param_3 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar2 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1001ae25_caseD_2;
          case 3:
            goto switchD_1001ae25_caseD_3;
          }
          goto switchD_1001ae25_caseD_1;
        }
        break;
      case 3:
        param_3 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar2 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1001ae25_caseD_2;
          case 3:
            goto switchD_1001ae25_caseD_3;
          }
          goto switchD_1001ae25_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar2[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar2[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar2[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar2[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar2[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar2[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar2[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar2 = puVar2 + uVar1;
  }
  switch(param_3) {
  case 1:
switchD_1001ae25_caseD_1:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1001ae25_caseD_2:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1001ae25_caseD_3:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1001ae25_caseD_0:
  return param_1;
}


/*
 * FUN_1001b125 at 1001b125
 * undefined FUN_1001b125(void)
 * Address ranges: 1001b125-1001b136
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b125(void)

{
  FUN_1001ce7a(0x10000,0x30000);
  return;
}


/*
 * FUN_1001b137 at 1001b137
 * undefined FUN_1001b137(void)
 * Address ranges: 1001b137-1001b174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Removing unreachable block (ram,0x1001b16c) */

undefined4 FUN_1001b137(void)

{
  return 0;
}


/*
 * FUN_1001b175 at 1001b175
 * undefined FUN_1001b175(void)
 * Address ranges: 1001b175-1001b19d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b175(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1001b137();
  return;
}


/*
 * FUN_1001b19e at 1001b19e
 * undefined FUN_1001b19e(void)
 * Address ranges: 1001b19e-1001b1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b19e(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_1001d020((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10024000 < 2) {
        uVar4 = (byte)PTR_DAT_10023df0[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_1001cfab((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10024004;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


/*
 * __fassign at 1001b25e
 * void __cdecl __fassign(int flag, char * argument, char * number)
 * Address ranges: 1001b25e-1001b29b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fassign  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    FUN_1001d4ec(&local_c);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FUN_1001d519(&number,number);
  *(char **)argument = number;
  return;
}


/*
 * FUN_1001b29c at 1001b29c
 * undefined FUN_1001b29c(void)
 * Address ranges: 1001b29c-1001b2fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001b29c(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_2c [24];
  int local_14 [4];
  
  FUN_1001d5bd(*param_1,local_14,local_2c);
  FUN_1001d546((uint)(0 < param_3) + param_2 + (uint)(local_14[0] == 0x2d),param_3 + 1,local_14);
  FUN_1001b2fd(param_2,param_3,param_4,local_14,0);
  return param_2;
}


/*
 * FUN_1001b2fd at 1001b2fd
 * undefined FUN_1001b2fd(void)
 * Address ranges: 1001b2fd-1001b3be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * FUN_1001b2fd(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_5 != '\0') {
    FUN_1001b59f(param_1 + (*param_4 == 0x2d),0 < param_2);
  }
  puVar2 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar2 = param_1 + 1;
  }
  puVar1 = puVar2;
  if (0 < param_2) {
    puVar1 = puVar2 + 1;
    *puVar2 = puVar2[1];
    *puVar1 = DAT_10024004;
  }
  puVar2 = (undefined1 *)FUN_1001d6d0(puVar1 + param_2 + (uint)(param_5 == '\0'),"e+000");
  if (param_3 != 0) {
    *puVar2 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar3 = param_4[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      puVar2[1] = 0x2d;
    }
    if (99 < iVar3) {
      puVar2[2] = puVar2[2] + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      puVar2[3] = puVar2[3] + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    puVar2[4] = puVar2[4] + (char)iVar3;
  }
  return param_1;
}


/*
 * FUN_1001b3bf at 1001b3bf
 * undefined FUN_1001b3bf(void)
 * Address ranges: 1001b3bf-1001b413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001b3bf(undefined8 *param_1,int param_2,int param_3)

{
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  
  FUN_1001d5bd(*param_1,&local_14,local_2c);
  FUN_1001d546((uint)(local_14 == 0x2d) + param_2,local_10 + param_3,&local_14);
  FUN_1001b414(param_2,param_3,&local_14,0);
  return param_2;
}


/*
 * FUN_1001b414 at 1001b414
 * undefined FUN_1001b414(void)
 * Address ranges: 1001b414-1001b4ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * FUN_1001b414(undefined1 *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
  }
  puVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = 0x2d;
    puVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1001b59f(puVar3,1);
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1001b59f(puVar3,1);
    *puVar3 = DAT_10024004;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1001b59f(puVar3 + 1,param_2);
      _memset(puVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}


/*
 * FUN_1001b4bb at 1001b4bb
 * undefined FUN_1001b4bb(void)
 * Address ranges: 1001b4bb-1001b54d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b4bb(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  
  FUN_1001d5bd(*param_1,&local_14,local_2c);
  iVar1 = local_10 + -1;
  pcVar2 = (char *)((uint)(local_14 == 0x2d) + param_2);
  FUN_1001d546(pcVar2,param_3,&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || (param_3 <= local_10)) {
    FUN_1001b2fd(param_2,param_3,param_4,&local_14,1);
  }
  else {
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1001b414(param_2,param_3,&local_14,1);
  }
  return;
}


/*
 * __cfltcvt at 1001b54e
 * errno_t __cdecl __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 * Address ranges: 1001b54e-1001b59e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __cfltcvt  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = FUN_1001b29c(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = FUN_1001b3bf(arg,buffer,format);
      return eVar1;
    }
    eVar1 = FUN_1001b4bb(arg,buffer,format,precision);
  }
  return eVar1;
}


/*
 * FUN_1001b59f at 1001b59f
 * undefined FUN_1001b59f(void)
 * Address ranges: 1001b59f-1001b5c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b59f(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1001c3f0(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}


/*
 * FUN_1001b5c4 at 1001b5c4
 * undefined FUN_1001b5c4(void)
 * Address ranges: 1001b5c4-1001b5f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b5c4(void)

{
  if (PTR_FUN_10021988 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10021988)();
  }
  FUN_1001b6c8(&DAT_10021008,&DAT_10021014);
  FUN_1001b6c8(&DAT_10021000,&DAT_10021004);
  return;
}


/*
 * __exit at 1001b5f1
 * noreturn void __cdecl __exit(int _Code)
 * Address ranges: 1001b5f1-1001b601
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1001b611(_Code,1,0);
  return;
}


/*
 * FUN_1001b602 at 1001b602
 * undefined FUN_1001b602(void)
 * Address ranges: 1001b602-1001b610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b602(void)

{
  FUN_1001b611(0,0,1);
  return;
}


/*
 * FUN_1001b611 at 1001b611
 * undefined FUN_1001b611(void)
 * Address ranges: 1001b611-1001b6b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b611(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1001b6b6();
  if (DAT_10025d58 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10025d54 = 1;
  DAT_10025d50 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1020fd50 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1020fd4c - 4), DAT_1020fd50 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1020fd50 <= puVar1);
    }
    FUN_1001b6c8(&DAT_10021018,&DAT_10021020);
  }
  FUN_1001b6c8(&DAT_10021024,&DAT_10021028);
  if (param_3 == 0) {
    DAT_10025d58 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1001b6bf();
  return;
}


/*
 * FUN_1001b6b6 at 1001b6b6
 * undefined FUN_1001b6b6(void)
 * Address ranges: 1001b6b6-1001b6be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b6b6(void)

{
  FUN_1001a434(0xd);
  return;
}


/*
 * FUN_1001b6bf at 1001b6bf
 * undefined FUN_1001b6bf(void)
 * Address ranges: 1001b6bf-1001b6c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b6bf(void)

{
  FUN_1001a495(0xd);
  return;
}


/*
 * FUN_1001b6c8 at 1001b6c8
 * undefined FUN_1001b6c8(void)
 * Address ranges: 1001b6c8-1001b6e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b6c8(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/*
 * FUN_1001b6e2 at 1001b6e2
 * undefined FUN_1001b6e2(void)
 * Address ranges: 1001b6e2-1001b735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001b6e2(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1001a39f();
  DAT_10023aa8 = TlsAlloc();
  if (DAT_10023aa8 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1001d7c9(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10023aa8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1001b754(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


/*
 * FUN_1001b736 at 1001b736
 * undefined FUN_1001b736(void)
 * Address ranges: 1001b736-1001b753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b736(void)

{
  FUN_1001a3c8();
  if (DAT_10023aa8 != 0xffffffff) {
    TlsFree(DAT_10023aa8);
    DAT_10023aa8 = 0xffffffff;
  }
  return;
}


/*
 * FUN_1001b754 at 1001b754
 * undefined FUN_1001b754(void)
 * Address ranges: 1001b754-1001b766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b754(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10024040;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


/*
 * FUN_1001b767 at 1001b767
 * undefined FUN_1001b767(void)
 * Address ranges: 1001b767-1001b7cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_1001b767(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10023aa8);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1001d7c9(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10023aa8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1001b754(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1001b7c2;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1001b7c2:
  SetLastError(dwErrCode);
  return lpTlsValue;
}


/*
 * FUN_1001b7ce at 1001b7ce
 * undefined FUN_1001b7ce(void)
 * Address ranges: 1001b7ce-1001b86d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b7ce(LPVOID param_1)

{
  if (DAT_10023aa8 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10023aa8), param_1 != (LPVOID)0x0)) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x24));
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x28));
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x30));
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x38));
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x40));
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10024040) {
        FUN_10018dc8(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10018dc8(param_1);
    }
    TlsSetValue(DAT_10023aa8,(LPVOID)0x0);
    return;
  }
  return;
}


/*
 * FUN_1001b86e at 1001b86e
 * undefined FUN_1001b86e(void)
 * Address ranges: 1001b86e-1001ba29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001b86e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1020fd40 = 0x20;
  DAT_1020fc40 = puVar2;
  for (; puVar2 < DAT_1020fc40 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_1020fd40 < (int)UVar8) {
      puVar2 = &DAT_1020fc44;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1020fd40;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1020fd40 = DAT_1020fd40 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_1020fd40 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1020fc40)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_1020fc40 + iVar6 * 9;
    if (DAT_1020fc40[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_1001ba13;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1001ba13:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1020fd40);
      return;
    }
  } while( true );
}


/*
 * FUN_1001ba2a at 1001ba2a
 * undefined FUN_1001ba2a(void)
 * Address ranges: 1001ba2a-1001ba7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001ba2a(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1020fc40;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10018dc8(*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1020fd40);
  return;
}


/*
 * FUN_1001ba7e at 1001ba7e
 * undefined FUN_1001ba7e(void)
 * Address ranges: 1001ba7e-1001bb36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ba7e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_1020fd48 == 0) {
    FUN_1001dcde();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_10025c98; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10025d38 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_10025c98;
  pcVar6 = DAT_10025c98;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_1001d6d0(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_10018dc8(DAT_10025c98);
  DAT_10025c98 = (char *)0x0;
  *puVar3 = 0;
  _DAT_1020fd44 = 1;
  return;
}


/*
 * FUN_1001bb37 at 1001bb37
 * undefined FUN_1001bb37(void)
 * Address ranges: 1001bb37-1001bbcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bb37(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_1020fd48 == 0) {
    FUN_1001dcde();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10025d5c,0x104);
  _DAT_10025d48 = &DAT_10025d5c;
  pcVar2 = &DAT_10025d5c;
  if (*DAT_1020fd78 != '\0') {
    pcVar2 = DAT_1020fd78;
  }
  FUN_1001bbd0(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_1001bbd0(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_10025d30 = pvVar1;
  _DAT_10025d2c = local_8 + -1;
  return;
}


/*
 * FUN_1001bbd0 at 1001bbd0
 * undefined FUN_1001bbd0(void)
 * Address ranges: 1001bbd0-1001bd83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001bbd0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_1020eb00 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_1020eb00 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1001bc7b;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1001bc7b:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_1020eb00 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1020eb00 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/*
 * FUN_1001bd84 at 1001bd84
 * undefined FUN_1001bd84(void)
 * Address ranges: 1001bd84-1001beb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPSTR FUN_1001bd84(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_10025e60 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10025e60 = 1;
LAB_1001bddb:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_10018dc8(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10025e60 = 2;
  }
  else {
    if (DAT_10025e60 == 1) goto LAB_1001bddb;
    if (DAT_10025e60 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_1001adf0(pCVar6,pCVar9,pcVar7 + (1 - (int)pCVar9));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


/*
 * FUN_1001beb6 at 1001beb6
 * undefined FUN_1001beb6(void)
 * Address ranges: 1001beb6-1001bebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001beb6(void)

{
  return 1;
}


/*
 * FUN_1001bebc at 1001bebc
 * undefined FUN_1001bebc(void)
 * Address ranges: 1001bebc-1001bef4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001bebc(void)

{
  if ((DAT_10025ca0 == 1) || ((DAT_10025ca0 == 0 && (DAT_10025ca4 == 1)))) {
    FUN_1001bef5(0xfc);
    if (DAT_10025e64 != (code *)0x0) {
      (*DAT_10025e64)();
    }
    FUN_1001bef5(0xff);
  }
  return;
}


/*
 * FUN_1001bef5 at 1001bef5
 * undefined FUN_1001bef5(void)
 * Address ranges: 1001bef5-1001c047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001bef5(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_10023ad8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10023b68);
  if (param_1 == (&DAT_10023ad8)[iVar5 * 2]) {
    if ((DAT_10025ca0 == 1) || ((DAT_10025ca0 == 0 && (DAT_10025ca4 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10023adc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x1001c03e;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x1001c045;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_1001d6d0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x1001bfbf;
        _strncpy(acStackY_1e3 + sVar4,"...",3);
      }
      FUN_1001d6d0();
      puStackY_1c4 = (undefined *)0x1001bfe0;
      FUN_1001d6e0();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_1002058c;
      uStackY_1cc = 0x1001bff1;
      FUN_1001d6e0();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x10023adc);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x1001c003;
      FUN_1001d6e0();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      acStackY_1e3[3] = '\x19';
      acStackY_1e3[4] = -0x40;
      acStackY_1e3[5] = '\x01';
      acStackY_1e3[6] = '\x10';
      FUN_1001dcfa();
    }
  }
  return;
}


/*
 * FUN_1001c048 at 1001c048
 * undefined FUN_1001c048(void)
 * Address ranges: 1001c048-1001c05e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001c048(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001c05f(param_1,param_2,param_3,0);
  return;
}


/*
 * FUN_1001c05f at 1001c05f
 * undefined FUN_1001c05f(void)
 * Address ranges: 1001c05f-1001c263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001c05f(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint uVar7;
  uint local_c;
  byte *local_8;
  
  local_c = 0;
  bVar6 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_10024000 < 2) {
      uVar2 = (byte)PTR_DAT_10023df0[(uint)bVar6 * 2] & 8;
    }
    else {
      uVar2 = FUN_1001cfab(bVar6,8);
    }
    if (uVar2 == 0) break;
    bVar6 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar6 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1001c0ba:
    bVar6 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar6 == 0x2b) goto LAB_1001c0ba;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar6 != 0x30) {
      param_3 = 10;
      goto LAB_1001c124;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = 8;
      goto LAB_1001c124;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar6 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar6 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1001c124:
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar7 = (uint)bVar6;
    if (DAT_10024000 < 2) {
      uVar3 = (byte)PTR_DAT_10023df0[uVar7 * 2] & 4;
    }
    else {
      uVar3 = FUN_1001cfab(uVar7,4);
    }
    if (uVar3 == 0) {
      if (DAT_10024000 < 2) {
        uVar7 = *(ushort *)(PTR_DAT_10023df0 + uVar7 * 2) & 0x103;
      }
      else {
        uVar7 = FUN_1001cfab(uVar7,0x103);
      }
      if (uVar7 == 0) {
LAB_1001c1d0:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_c)))))))) {
          puVar5 = (undefined4 *)FUN_1001df01();
          *puVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_c = 0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return -local_c;
      }
      iVar4 = FUN_1001df13((int)(char)bVar6);
      uVar7 = iVar4 - 0x37;
    }
    else {
      uVar7 = (int)(char)bVar6 - 0x30;
    }
    if (param_3 <= uVar7) goto LAB_1001c1d0;
    if ((local_c < uVar2) ||
       ((local_c == uVar2 && (uVar7 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_c = local_c * param_3 + uVar7;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar6 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}


/*
 * _strchr at 1001c280
 * char * __cdecl _strchr(char * _Str, int _Val)
 * Address ranges: 1001c270-1001c274;1001c280-1001c33b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


/*
 * _strstr at 1001c340
 * char * __cdecl _strstr(char * _Str, char * _SubStr)
 * Address ranges: 1001c340-1001c3bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strstr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_1001c3b3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_1001c3b3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}


/*
 * FUN_1001c3c0 at 1001c3c0
 * undefined FUN_1001c3c0(void)
 * Address ranges: 1001c3c0-1001c3ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_1001c3c0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/*
 * FUN_1001c3f0 at 1001c3f0
 * undefined FUN_1001c3f0(void)
 * Address ranges: 1001c3f0-1001c44a;1001c44c-1001c452;1001c460-1001c488;1001c48c-1001c4ae;1001c4b0-1001c4c8;1001c4ec-1001c535;1001c548-1001c54e;1001c550-1001c55a;1001c55c-1001c56c;1001c570-1001c586;1001c588-1001c5ad;1001c5b0-1001c5b8;1001c5bc-1001c5da;1001c5e8-1001c604;1001c608-1001c62e;1001c630-1001c660;1001c684-1001c6cd;1001c6e0-1001c6e6;1001c6e8-1001c6f4;1001c6f8-1001c70a;1001c70c-1001c724
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_1001c3f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar2 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar2 & 3) == 0) {
      uVar1 = param_3 >> 2;
      param_3 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar2 = *param_2;
          param_2 = param_2 + -1;
          puVar2 = puVar2 + -1;
        }
        switch(param_3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1001c5a7_caseD_2;
        case 3:
          goto switchD_1001c5a7_caseD_3;
        }
        goto switchD_1001c5a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1001c5a7_caseD_0;
      case 1:
        goto switchD_1001c5a7_caseD_1;
      case 2:
        goto switchD_1001c5a7_caseD_2;
      case 3:
        goto switchD_1001c5a7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar2 & 3);
        switch((uint)puVar2 & 3) {
        case 1:
          param_3 = uVar1 & 3;
          *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          uVar1 = uVar1 >> 2;
          puVar2 = (undefined4 *)((int)puVar2 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1001c5a7_caseD_2;
            case 3:
              goto switchD_1001c5a7_caseD_3;
            }
            goto switchD_1001c5a7_caseD_1;
          }
          break;
        case 2:
          param_3 = uVar1 & 3;
          *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar2 = (undefined4 *)((int)puVar2 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1001c5a7_caseD_2;
            case 3:
              goto switchD_1001c5a7_caseD_3;
            }
            goto switchD_1001c5a7_caseD_1;
          }
          break;
        case 3:
          param_3 = uVar1 & 3;
          *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
          *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar2 = (undefined4 *)((int)puVar2 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1001c5a7_caseD_2;
            case 3:
              goto switchD_1001c5a7_caseD_3;
            }
            goto switchD_1001c5a7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar2[7 - uVar1] = param_2[7 - uVar1];
    case 6:
      puVar2[6 - uVar1] = param_2[6 - uVar1];
    case 5:
      puVar2[5 - uVar1] = param_2[5 - uVar1];
    case 4:
      puVar2[4 - uVar1] = param_2[4 - uVar1];
    case 3:
      puVar2[3 - uVar1] = param_2[3 - uVar1];
    case 2:
      puVar2[2 - uVar1] = param_2[2 - uVar1];
    case 1:
      puVar2[1 - uVar1] = param_2[1 - uVar1];
      param_2 = param_2 + -uVar1;
      puVar2 = puVar2 + -uVar1;
    }
    switch(param_3) {
    case 1:
switchD_1001c5a7_caseD_1:
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
      return param_1;
    case 2:
switchD_1001c5a7_caseD_2:
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
      return param_1;
    case 3:
switchD_1001c5a7_caseD_3:
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
      *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
      return param_1;
    }
switchD_1001c5a7_caseD_0:
    return param_1;
  }
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    param_3 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      switch(param_3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1001c425_caseD_2;
      case 3:
        goto switchD_1001c425_caseD_3;
      }
      goto switchD_1001c425_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1001c425_caseD_0;
    case 1:
      goto switchD_1001c425_caseD_1;
    case 2:
      goto switchD_1001c425_caseD_2;
    case 3:
      goto switchD_1001c425_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        param_3 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar2 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1001c425_caseD_2;
          case 3:
            goto switchD_1001c425_caseD_3;
          }
          goto switchD_1001c425_caseD_1;
        }
        break;
      case 2:
        param_3 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar2 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1001c425_caseD_2;
          case 3:
            goto switchD_1001c425_caseD_3;
          }
          goto switchD_1001c425_caseD_1;
        }
        break;
      case 3:
        param_3 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar2 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1001c425_caseD_2;
          case 3:
            goto switchD_1001c425_caseD_3;
          }
          goto switchD_1001c425_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar2[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar2[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar2[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar2[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar2[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar2[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar2[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar2 = puVar2 + uVar1;
  }
  switch(param_3) {
  case 1:
switchD_1001c425_caseD_1:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1001c425_caseD_2:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1001c425_caseD_3:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1001c425_caseD_0:
  return param_1;
}


/*
 * _memset at 1001c730
 * void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * Address ranges: 1001c730-1001c787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/*
 * FUN_1001c788 at 1001c788
 * undefined FUN_1001c788(void)
 * Address ranges: 1001c788-1001c7ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001c788(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_1020fd40) &&
     ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001e10f(param_1);
    uVar1 = FUN_1001c7ed(param_1,param_2,param_3);
    FUN_1001e16e(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1001df0a();
  *puVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_1001c7ed at 1001c7ed
 * undefined FUN_1001c7ed(void)
 * Address ranges: 1001c7ed-1001c85f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD FUN_1001c7ed(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)FUN_1001e0cd(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_1001df01();
    *puVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
    }
    else {
      DVar4 = 0;
    }
    if (DVar4 == 0) {
      pbVar1 = (byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1001de8e(DVar4);
  }
  return 0xffffffff;
}


/*
 * FUN_1001c860 at 1001c860
 * undefined FUN_1001c860(void)
 * Address ranges: 1001c860-1001c8c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001c860(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_1020fd40) &&
     ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001e10f(param_1);
    uVar1 = FUN_1001c8c5(param_1,param_2,param_3);
    FUN_1001e16e(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1001df0a();
  *puVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_1001c8c5 at 1001c8c5
 * undefined FUN_1001c8c5(void)
 * Address ranges: 1001c8c5-1001ca4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001c8c5(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  undefined4 *puVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_1001c8de:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1020fc40 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1001c7ed(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_1001c9ad:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1001ca1f;
      if (param_1 == 5) {
        puVar7 = (undefined4 *)FUN_1001df01();
        *puVar7 = 9;
        puVar7 = (undefined4 *)FUN_1001df0a();
        *puVar7 = 5;
      }
      else {
        FUN_1001de8e(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_1001c9ad;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1001c9ad;
        } while( true );
      }
LAB_1001ca1f:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1001c8de;
      puVar7 = (undefined4 *)FUN_1001df01();
      *puVar7 = 0x1c;
      puVar7 = (undefined4 *)FUN_1001df0a();
      *puVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}


/*
 * FUN_1001ca50 at 1001ca50
 * undefined FUN_1001ca50(void)
 * Address ranges: 1001ca50-1001ca93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ca50(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10025e68 = _DAT_10025e68 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


/*
 * FUN_1001ca94 at 1001ca94
 * undefined FUN_1001ca94(void)
 * Address ranges: 1001ca94-1001cabc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte FUN_1001ca94(uint param_1)

{
  if (DAT_1020fd40 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


/*
 * FUN_1001cb79 at 1001cb79
 * undefined FUN_1001cb79(void)
 * Address ranges: 1001cb79-1001cba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001cb79(uint param_1)

{
  if ((0x10023b6f < param_1) && (param_1 < 0x10023dd1)) {
    FUN_1001a434(((int)(param_1 + 0xeffdc490) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


/*
 * FUN_1001cba8 at 1001cba8
 * undefined FUN_1001cba8(void)
 * Address ranges: 1001cba8-1001cbca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001cba8(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001a434(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


/*
 * FUN_1001cbcb at 1001cbcb
 * undefined FUN_1001cbcb(void)
 * Address ranges: 1001cbcb-1001cbf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001cbcb(uint param_1)

{
  if ((0x10023b6f < param_1) && (param_1 < 0x10023dd1)) {
    FUN_1001a495(((int)(param_1 + 0xeffdc490) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


/*
 * FUN_1001cbfa at 1001cbfa
 * undefined FUN_1001cbfa(void)
 * Address ranges: 1001cbfa-1001cc1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001cbfa(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001a495(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


/*
 * _strlen at 1001cc20
 * size_t __cdecl _strlen(char * _Str)
 * Address ranges: 1001cc20-1001cc9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strlen  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_1001cc40;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1001cc73:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1001cc40:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_1001cc73;
}


/*
 * FUN_1001cc9b at 1001cc9b
 * undefined FUN_1001cc9b(void)
 * Address ranges: 1001cc9b-1001ccf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001cc9b(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1020e9e4);
  bVar2 = DAT_1020e9e0 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1020e9e4);
    FUN_1001a434(0x13);
  }
  uVar1 = FUN_1001ccf4(param_1,param_2);
  if (bVar2) {
    FUN_1001a495(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1020e9e4);
  }
  return uVar1;
}


/*
 * FUN_1001ccf4 at 1001ccf4
 * undefined FUN_1001ccf4(void)
 * Address ranges: 1001ccf4-1001cd5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001ccf4(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10025e90 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10025ea0,0x220,&param_2,1,lpMultiByteStr,DAT_10024000,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 0x2a;
  return -1;
}


/*
 * __aulldiv at 1001cd60
 * undefined __aulldiv(void)
 * Address ranges: 1001cd60-1001cdc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aulldiv  Library: Visual Studio
 */


/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/*
 * __aullrem at 1001cdd0
 * undefined __aullrem(void)
 * Address ranges: 1001cdd0-1001ce44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aullrem  Library: Visual Studio
 */


/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/*
 * FUN_1001ce45 at 1001ce45
 * undefined FUN_1001ce45(void)
 * Address ranges: 1001ce45-1001ce79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001ce45(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1001ce90();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1001cf22(uVar1);
  return uVar1;
}


/*
 * FUN_1001ce7a at 1001ce7a
 * undefined FUN_1001ce7a(void)
 * Address ranges: 1001ce7a-1001ce8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001ce7a(undefined4 param_1,uint param_2)

{
  FUN_1001ce45(param_1,param_2 & 0xfff7ffff);
  return;
}


/*
 * FUN_1001ce90 at 1001ce90
 * undefined FUN_1001ce90(void)
 * Address ranges: 1001ce90-1001cf21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001ce90(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}


/*
 * FUN_1001cf22 at 1001cf22
 * undefined FUN_1001cf22(void)
 * Address ranges: 1001cf22-1001cfaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001cf22(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


/*
 * FUN_1001cfab at 1001cfab
 * undefined FUN_1001cfab(void)
 * Address ranges: 1001cfab-1001d01f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_1001cfab(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  if (param_2 + 1U < 0x101) {
    param_2._2_2_ = *(ushort *)(PTR_DAT_10023df0 + param_2 * 2);
  }
  else {
    if ((PTR_DAT_10023df0[(param_2 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)param_1 >> 8),(char)param_2) & 0xffff00ff;
      uVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_2,(char)((uint)param_2 >> 8));
      local_8 = CONCAT22((short)((uint)param_1 >> 0x10),(undefined2)local_8) & 0xff00ffff;
      uVar2 = 2;
    }
    iVar1 = FUN_1001e348(1,&local_8,uVar2,(int)&param_2 + 2,0,0,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return param_2._2_2_ & param_3;
}


/*
 * FUN_1001d020 at 1001d020
 * undefined FUN_1001d020(void)
 * Address ranges: 1001d020-1001d08e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001d020(int param_1)

{
  bool bVar1;
  
  if (DAT_10025e90 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1020e9e4);
    bVar1 = DAT_1020e9e0 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
      FUN_1001a434(0x13);
    }
    param_1 = FUN_1001d08f(param_1);
    if (bVar1) {
      FUN_1001a495(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
    }
  }
  return param_1;
}


/*
 * FUN_1001d08f at 1001d08f
 * undefined FUN_1001d08f(void)
 * Address ranges: 1001d08f-1001d159
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001d08f(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = param_1;
  if (DAT_10025e90 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    uVar3 = 1;
    if ((int)param_1 < 0x100) {
      if (DAT_10024000 < 2) {
        uVar2 = (byte)PTR_DAT_10023df0[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1001cfab(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10023df0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar3 = 2;
    }
    iVar4 = FUN_1001e491(DAT_10025e90,0x100,&param_1,uVar3,&local_8,3,0,1);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar1 = local_8 & 0xff;
      }
      else {
        uVar1 = local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/*
 * FUN_1001d15a at 1001d15a
 * undefined FUN_1001d15a(void)
 * Address ranges: 1001d15a-1001d1a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001d15a(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}


/*
 * FUN_1001d1a3 at 1001d1a3
 * undefined FUN_1001d1a3(void)
 * Address ranges: 1001d1a3-1001d1f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d1a3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1001e6e0(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (undefined4 *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1001e6e0(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}


/*
 * FUN_1001d1f9 at 1001d1f9
 * undefined FUN_1001d1f9(void)
 * Address ranges: 1001d1f9-1001d284
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001d1f9(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_1001d15a(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_1001d1a3(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}


/*
 * FUN_1001d285 at 1001d285
 * undefined FUN_1001d285(void)
 * Address ranges: 1001d285-1001d29f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d285(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_1 = param_1 - (int)param_2;
  iVar1 = 3;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/*
 * FUN_1001d2a0 at 1001d2a0
 * undefined FUN_1001d2a0(void)
 * Address ranges: 1001d2a0-1001d2ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d2a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/*
 * FUN_1001d2ac at 1001d2ac
 * undefined FUN_1001d2ac(void)
 * Address ranges: 1001d2ac-1001d2c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001d2ac(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}


/*
 * FUN_1001d2c7 at 1001d2c7
 * undefined FUN_1001d2c7(void)
 * Address ranges: 1001d2c7-1001d353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d2c7(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}


/*
 * FUN_1001d354 at 1001d354
 * undefined FUN_1001d354(void)
 * Address ranges: 1001d354-1001d4bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001d354(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [12];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_1001d2ac(&local_10);
    if (iVar2 != 0) {
LAB_1001d480:
      uVar5 = 0;
      goto LAB_1001d482;
    }
    FUN_1001d2a0(&local_10);
  }
  else {
    FUN_1001d285(local_1c,&local_10);
    iVar2 = FUN_1001d1f9(&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_1001d2a0(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_1001d2a0(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_1001d2c7(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1001d482;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_1001d2c7(&local_10,param_3[3]);
        goto LAB_1001d480;
      }
      FUN_1001d285(&local_10,local_1c);
      FUN_1001d2c7(&local_10,iVar2 - iVar4);
      FUN_1001d1f9(&local_10,param_3[2]);
      FUN_1001d2c7(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1001d482:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}


/*
 * FUN_1001d4c0 at 1001d4c0
 * undefined FUN_1001d4c0(void)
 * Address ranges: 1001d4c0-1001d4d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d4c0(undefined4 param_1,undefined4 param_2)

{
  FUN_1001d354(param_1,param_2,&DAT_10024010);
  return;
}


/*
 * FUN_1001d4d6 at 1001d4d6
 * undefined FUN_1001d4d6(void)
 * Address ranges: 1001d4d6-1001d4eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d4d6(undefined4 param_1,undefined4 param_2)

{
  FUN_1001d354(param_1,param_2,&DAT_10024028);
  return;
}


/*
 * FUN_1001d4ec at 1001d4ec
 * undefined FUN_1001d4ec(void)
 * Address ranges: 1001d4ec-1001d518
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d4ec(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_10 [12];
  
  FUN_1001e881(local_10,&param_2,param_2,0,0,0,0);
  FUN_1001d4c0(local_10,param_1);
  return;
}


/*
 * FUN_1001d519 at 1001d519
 * undefined FUN_1001d519(void)
 * Address ranges: 1001d519-1001d545
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d519(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_10 [12];
  
  FUN_1001e881(local_10,&param_2,param_2,0,0,0,0);
  FUN_1001d4d6(local_10,param_1);
  return;
}


/*
 * FUN_1001d546 at 1001d546
 * undefined FUN_1001d546(void)
 * Address ranges: 1001d546-1001d5bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d546(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = (char *)((int)param_1 + -1);
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_1001c3f0(pcVar1,_Str,sVar3 + 1);
  }
  return;
}


/*
 * FUN_1001d5bd at 1001d5bd
 * undefined FUN_1001d5bd(void)
 * Address ranges: 1001d5bd-1001d618
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * FUN_1001d5bd(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short local_2c;
  char local_2a;
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  FUN_1001d619(&local_10,&param_1);
  iVar3 = FUN_1001ed52(local_10,uStack_c,uStack_8,0x11,0,&local_2c);
  iVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_1001d6d0(param_4,local_28);
  piVar1[3] = iVar2;
  return piVar1;
}


/*
 * FUN_1001d619 at 1001d619
 * undefined FUN_1001d619(void)
 * Address ranges: 1001d619-1001d6ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d619(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}


/*
 * FUN_1001d6d0 at 1001d6d0
 * undefined FUN_1001d6d0(void)
 * Address ranges: 1001d6d0-1001d6d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * FUN_1001d6d0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_1001d7b8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_1001d7b8:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/*
 * FUN_1001d6e0 at 1001d6e0
 * undefined FUN_1001d6e0(void)
 * Address ranges: 1001d6e0-1001d7bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * FUN_1001d6e0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1001d6fc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1001d72f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1001d74b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1001d6fc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1001d74b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1001d74b;
    }
  }
LAB_1001d72f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1001d74b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_1001d7b8:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_1001d7b8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/*
 * __fptrap at 1001d7c0
 * void __cdecl __fptrap(void)
 * Address ranges: 1001d7c0-1001d7c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fptrap  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}


/*
 * FUN_1001d7c9 at 1001d7c9
 * undefined FUN_1001d7c9(void)
 * Address ranges: 1001d7c9-1001d85c;1001d86b-1001d8e5;1001d8f4-1001d905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPVOID FUN_1001d7c9(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100205c8;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_1020fd74 == 3) {
        if (uVar2 <= DAT_1020fd6c) {
          FUN_1001a434(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_100198c6(uVar2);
          local_8 = 0xffffffff;
          FUN_1001d862();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_1001d8b6;
LAB_1001d8a5:
          _memset(local_24,0,_Size);
        }
LAB_1001d8b1:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1020fd74 != 2) || (DAT_100239c4 < uVar3)) goto LAB_1001d8b1;
        FUN_1001a434(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_1001a073(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1001d8eb();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_1001d8a5;
      }
LAB_1001d8b6:
      local_24 = HeapAlloc(DAT_1020fd70,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10025d10 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_1001a4aa(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}


/*
 * FUN_1001d862 at 1001d862
 * undefined FUN_1001d862(void)
 * Address ranges: 1001d862-1001d86a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d862(void)

{
  FUN_1001a495(9);
  return;
}


/*
 * FUN_1001d8eb at 1001d8eb
 * undefined FUN_1001d8eb(void)
 * Address ranges: 1001d8eb-1001d8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001d8eb(void)

{
  FUN_1001a495(9);
  return;
}


/*
 * FUN_1001d906 at 1001d906
 * undefined FUN_1001d906(void)
 * Address ranges: 1001d906-1001dab2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001d906(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_1001a434(0x19);
  CodePage = FUN_1001dab3(param_1);
  if (CodePage != DAT_1020e9e8) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100240d0;
LAB_1001d943:
      if (*pUVar5 != CodePage) goto code_r0x1001d947;
      local_8 = 0;
      puVar15 = &DAT_1020eb00;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100240e0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100240c8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1020eb00 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1020e9fc = 1;
      DAT_1020e9e8 = CodePage;
      DAT_1020ec04 = FUN_1001dafd(CodePage);
      DAT_1020e9f0 = *(undefined4 *)(iVar12 + 0x100240d4);
      DAT_1020e9f4 = *(undefined4 *)(iVar12 + 0x100240d8);
      DAT_1020e9f8 = *(undefined4 *)(iVar12 + 0x100240dc);
      goto LAB_1001da97;
    }
    goto LAB_1001da92;
  }
  goto LAB_1001d92d;
code_r0x1001d947:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100241bf < (int)pUVar5) goto code_r0x1001d952;
  goto LAB_1001d943;
code_r0x1001d952:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1020ec04 = 0;
    puVar15 = &DAT_1020eb00;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1020e9fc = 0;
      DAT_1020e9e8 = CodePage;
    }
    else {
      DAT_1020e9e8 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1020eb00 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1020eb00 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1020ec04 = FUN_1001dafd(CodePage);
      _DAT_1020e9fc = 1;
    }
    DAT_1020e9f0 = 0;
    DAT_1020e9f4 = 0;
    DAT_1020e9f8 = 0;
  }
  else {
    if (DAT_10025e6c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1001daa4;
    }
LAB_1001da92:
    FUN_1001db30();
  }
LAB_1001da97:
  FUN_1001db59();
LAB_1001d92d:
  uVar14 = 0;
LAB_1001daa4:
  FUN_1001a495(0x19);
  return uVar14;
}


/*
 * FUN_1001dab3 at 1001dab3
 * undefined FUN_1001dab3(void)
 * Address ranges: 1001dab3-1001dafc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001dab3(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10025e6c = 1;
                    /* WARNING: Could not recover jumptable at 0x1001dacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10025e6c = 1;
                    /* WARNING: Could not recover jumptable at 0x1001dae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10025ea0;
  }
  DAT_10025e6c = (uint)bVar2;
  return param_1;
}


/*
 * FUN_1001dafd at 1001dafd
 * undefined FUN_1001dafd(void)
 * Address ranges: 1001dafd-1001db2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001dafd(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


/*
 * FUN_1001db30 at 1001db30
 * undefined FUN_1001db30(void)
 * Address ranges: 1001db30-1001db58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001db30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1020eb00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1020e9e8 = 0;
  _DAT_1020e9fc = 0;
  DAT_1020ec04 = 0;
  DAT_1020e9f0 = 0;
  DAT_1020e9f4 = 0;
  DAT_1020e9f8 = 0;
  return;
}


/*
 * FUN_1001db59 at 1001db59
 * undefined FUN_1001db59(void)
 * Address ranges: 1001db59-1001dcdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001db59(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  undefined4 *puVar10;
  ushort local_518 [256];
  undefined1 local_318 [256];
  undefined1 local_218 [256];
  undefined4 local_118 [64];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_1020e9e8,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      *(char *)((int)local_118 + uVar3) = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0]._0_1_ = 0x20;
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          puVar10 = (undefined4 *)((int)local_118 + uVar3);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0x20202020;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = 0x20;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_1001e348(1,local_118,0x100,local_518,DAT_1020e9e8,DAT_1020ec04,0);
    FUN_1001e491(DAT_1020ec04,0x100,local_118,0x100,local_218,0x100,DAT_1020e9e8,0);
    FUN_1001e491(DAT_1020ec04,0x200,local_118,0x100,local_318,0x100,DAT_1020e9e8,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1020eb00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = local_318[uVar3];
          goto LAB_1001dc65;
        }
        (&DAT_1020ea00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1020eb00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = local_218[uVar3];
LAB_1001dc65:
        (&DAT_1020ea00)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_1020eb00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1001dcaf;
        }
        (&DAT_1020ea00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1020eb00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1001dcaf:
        (&DAT_1020ea00)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


/*
 * FUN_1001dcde at 1001dcde
 * undefined FUN_1001dcde(void)
 * Address ranges: 1001dcde-1001dcf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001dcde(void)

{
  if (DAT_1020fd48 == 0) {
    FUN_1001d906(0xfffffffd);
    DAT_1020fd48 = 1;
  }
  return;
}


/*
 * FUN_1001dcfa at 1001dcfa
 * undefined FUN_1001dcfa(void)
 * Address ranges: 1001dcfa-1001dd82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001dcfa(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10025e70 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10025e70 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10025e70 != (FARPROC)0x0) {
        DAT_10025e74 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10025e78 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1001dd49;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1001dd49:
    if (DAT_10025e74 != (FARPROC)0x0) {
      iVar1 = (*DAT_10025e74)();
      if ((iVar1 != 0) && (DAT_10025e78 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10025e78)(iVar1);
      }
    }
    iVar1 = (*DAT_10025e70)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


/*
 * _strncpy at 1001dd90
 * char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * Address ranges: 1001dd90-1001de8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1001ddce;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1001de0b;
        goto LAB_1001de79;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1001de75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1001de79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1001de0b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1001de75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1001de75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1001de75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1001ddce:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1001de0b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/*
 * FUN_1001de8e at 1001de8e
 * undefined FUN_1001de8e(void)
 * Address ranges: 1001de8e-1001df00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001de8e(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_1001df0a();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_100241c0;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_1001df01();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x100241c4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x10024328);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_1001df01();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_1001df01();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 0x16;
  return;
}


/*
 * FUN_1001df01 at 1001df01
 * undefined FUN_1001df01(void)
 * Address ranges: 1001df01-1001df09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001df01(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b767();
  return iVar1 + 8;
}


/*
 * FUN_1001df0a at 1001df0a
 * undefined FUN_1001df0a(void)
 * Address ranges: 1001df0a-1001df12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001df0a(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b767();
  return iVar1 + 0xc;
}


/*
 * FUN_1001df13 at 1001df13
 * undefined FUN_1001df13(void)
 * Address ranges: 1001df13-1001df81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001df13(int param_1)

{
  bool bVar1;
  
  if (DAT_10025e90 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1020e9e4);
    bVar1 = DAT_1020e9e0 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
      FUN_1001a434(0x13);
    }
    param_1 = FUN_1001df82(param_1);
    if (bVar1) {
      FUN_1001a495(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
    }
  }
  return param_1;
}


/*
 * FUN_1001df82 at 1001df82
 * undefined FUN_1001df82(void)
 * Address ranges: 1001df82-1001e04d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_1001df82(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_8;
  
  uVar1 = param_1;
  if (DAT_10025e90 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10024000 < 2) {
        uVar2 = (byte)PTR_DAT_10023df0[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1001cfab(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10023df0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      uVar4 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar4 = 2;
    }
    iVar3 = FUN_1001e491(DAT_10025e90,0x200,&param_1,uVar4,&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = local_8 & 0xff;
      }
      else {
        uVar1 = local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/*
 * FUN_1001e04e at 1001e04e
 * undefined FUN_1001e04e(void)
 * Address ranges: 1001e04e-1001e0cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001e04e(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1020fd40) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1020fc40)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10025ca4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001e0aa;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001e0aa:
      *(undefined4 *)((&DAT_1020fc40)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1001df0a();
  *puVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_1001e0cd at 1001e0cd
 * undefined FUN_1001e0cd(void)
 * Address ranges: 1001e0cd-1001e10e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001e0cd(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_1020fd40) &&
     ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1020fc40)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_1001df01();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_1001df0a();
  *puVar1 = 0;
  return 0xffffffff;
}


/*
 * FUN_1001e10f at 1001e10f
 * undefined FUN_1001e10f(void)
 * Address ranges: 1001e10f-1001e16d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001e10f(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1020fc40)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1001a434(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1001a495(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1020fc40)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


/*
 * FUN_1001e16e at 1001e16e
 * undefined FUN_1001e16e(void)
 * Address ranges: 1001e16e-1001e18f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001e16e(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1020fc40)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


/*
 * FUN_1001e211 at 1001e211
 * undefined FUN_1001e211(void)
 * Address ranges: 1001e211-1001e23e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001e211(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001e23f(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1001f062(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/*
 * FUN_1001e23f at 1001e23f
 * undefined FUN_1001e23f(void)
 * Address ranges: 1001e23f-1001e29a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001e23f(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar3 = *param_1 - param_1[2];
    if (0 < iVar3) {
      iVar1 = FUN_1001c860(param_1[4],param_1[2],iVar3);
      if (iVar1 == iVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}


/*
 * FUN_1001e2a4 at 1001e2a4
 * undefined FUN_1001e2a4(void)
 * Address ranges: 1001e2a4-1001e347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001e2a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_1001a434(2);
  iVar3 = 0;
  if (0 < DAT_1020fc20) {
    do {
      iVar1 = *(int *)(DAT_1020ec08 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_1001cba8(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1020ec08 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_1001e211(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_1001e211(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_1001cbfa(iVar3,*(undefined4 *)(DAT_1020ec08 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1020fc20);
  }
  FUN_1001a495(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}


/*
 * FUN_1001e348 at 1001e348
 * undefined FUN_1001e348(void)
 * Address ranges: 1001e348-1001e440;1001e44c-1001e490
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL FUN_1001e348(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
                 int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10020628;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10025ebc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10025ebc == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_10025ebc = iVar3;
  if (DAT_10025ebc != 2) {
    if (DAT_10025ebc == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10025ea0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1001c3c0();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_10025e90;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


/*
 * FUN_1001e491 at 1001e491
 * undefined FUN_1001e491(void)
 * Address ranges: 1001e491-1001e5a0;1001e5b4-1001e654;1001e667-1001e6b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001e491(LCID param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6,
                UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10020638;
  puStack_10 = &LAB_10018cf0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10025ec0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10025ec0 = 2;
    }
    else {
      DAT_10025ec0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1001e6b5(param_3,param_4);
  }
  if (DAT_10025ec0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10025ec0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10025ea0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1001c3c0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1001c3c0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


/*
 * FUN_1001e6b5 at 1001e6b5
 * undefined FUN_1001e6b5(void)
 * Address ranges: 1001e6b5-1001e6df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001e6b5(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}


/*
 * FUN_1001e6e0 at 1001e6e0
 * undefined FUN_1001e6e0(void)
 * Address ranges: 1001e6e0-1001e700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001e6e0(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


/*
 * ___add_12 at 1001e701
 * undefined ___add_12(void)
 * Address ranges: 1001e701-1001e75e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___add_12  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void ___add_12(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001e6e0(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1001e6e0(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1001e6e0(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1001e6e0(param_1[2],param_2[2],param_1 + 2);
  return;
}


/*
 * FUN_1001e75f at 1001e75f
 * undefined FUN_1001e75f(void)
 * Address ranges: 1001e75f-1001e78c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001e75f(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


/*
 * FUN_1001e78d at 1001e78d
 * undefined FUN_1001e78d(void)
 * Address ranges: 1001e78d-1001e7b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001e78d(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


/*
 * FUN_1001e7ba at 1001e7ba
 * undefined FUN_1001e7ba(void)
 * Address ranges: 1001e7ba-1001e880
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001e7ba(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_1001e75f(puVar1);
      FUN_1001e75f(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1001e75f(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_1001e75f(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}


/*
 * FUN_1001e881 at 1001e881
 * undefined FUN_1001e881(void)
 * Address ranges: 1001e881-1001ed21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4
FUN_1001e881(ushort *param_1,int *param_2,byte *param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = 0;
  local_c = 0;
  local_18 = 0;
  for (pbVar7 = param_3;
      (((bVar6 = *pbVar7, bVar6 == 0x20 || (bVar6 == 9)) || (bVar6 == 10)) || (bVar6 == 0xd));
      pbVar7 = pbVar7 + 1) {
  }
  iVar4 = 4;
  iVar10 = 0;
  iVar5 = local_14;
LAB_1001e8d8:
  local_14 = iVar5;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  pbVar9 = param_3;
  iVar1 = local_14;
  switch(iVar10) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1001e8f5:
      local_14 = iVar1;
      iVar10 = 3;
      goto LAB_1001eb1a;
    }
    if (bVar6 == DAT_10024004) goto LAB_1001e904;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar10 = 2;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar10 = 2;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else {
      iVar10 = iVar5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1001ebf4;
    }
    goto LAB_1001e8d8;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar1 = iVar5, (char)bVar6 < ':')) goto LAB_1001e8f5;
    iVar10 = iVar4;
    pbVar7 = pbVar8;
    if (bVar6 != DAT_10024004) {
      iVar10 = iVar5;
      if ((bVar6 == 0x2b) || (iVar10 = local_14, bVar6 == 0x2d)) goto LAB_1001e989;
      iVar10 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1001e962;
    }
    goto LAB_1001e8d8;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1001e8f5;
    if (bVar6 == DAT_10024004) {
LAB_1001e904:
      iVar10 = 5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else {
      iVar10 = iVar5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1001ebf9;
    }
    goto LAB_1001e8d8;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10024000 < 2) {
        uVar2 = (byte)PTR_DAT_10023df0[(uint)bVar6 * 2] & 4;
      }
      else {
        uVar2 = FUN_1001cfab(bVar6,4);
      }
      if (uVar2 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar3 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar3;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar10 = iVar4;
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (bVar6 != DAT_10024004) goto LAB_1001ea76;
    goto LAB_1001e8d8;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar10 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar10 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar10;
      local_28 = iVar5;
      if (DAT_10024000 < 2) {
        uVar2 = (byte)PTR_DAT_10023df0[(uint)bVar6 * 2] & 4;
      }
      else {
        uVar2 = FUN_1001cfab(bVar6,4);
      }
      if (uVar2 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar3 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar3;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar10 = local_14;
    }
LAB_1001ea76:
    iVar10 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1001e989:
      local_14 = iVar10;
      iVar10 = 0xb;
      pbVar7 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1001e962:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1001ebf4;
      iVar10 = 6;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    goto LAB_1001e8d8;
  case 5:
    local_28 = iVar5;
    if (DAT_10024000 < 2) {
      uVar2 = (byte)PTR_DAT_10023df0[(uint)bVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_1001cfab(bVar6,4);
    }
    iVar10 = iVar4;
    if (uVar2 != 0) goto LAB_1001eb1a;
    goto LAB_1001ebf9;
  case 6:
    param_3 = pbVar7 + -1;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1001eb4f;
      if (bVar6 == 0x2d) goto LAB_1001eb43;
      pbVar9 = param_3;
      if (bVar6 != 0x30) goto LAB_1001ebf9;
LAB_1001eae8:
      iVar10 = 8;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      goto LAB_1001e8d8;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x30) goto LAB_1001eae8;
      goto LAB_1001ebf9;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1001ebf4;
    break;
  case 9:
    local_24 = 1;
    iVar4 = 0;
    goto LAB_1001eb7a;
  default:
    goto switchD_1001e8e4_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      param_3 = pbVar7;
      if (bVar6 == 0x2b) {
LAB_1001eb4f:
        iVar10 = 7;
        pbVar7 = pbVar8;
        iVar5 = local_14;
      }
      else {
        pbVar9 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1001ebf9;
LAB_1001eb43:
        local_1c = -1;
        iVar10 = 7;
        pbVar7 = pbVar8;
        iVar5 = local_14;
      }
      goto LAB_1001e8d8;
    }
    iVar10 = 10;
    pbVar8 = pbVar7;
switchD_1001e8e4_caseD_a:
    pbVar7 = pbVar8;
    pbVar9 = pbVar8;
    iVar5 = local_14;
    if (iVar10 != 10) goto LAB_1001e8d8;
    goto LAB_1001ebf9;
  }
  iVar10 = 9;
LAB_1001eb1a:
  pbVar7 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1001e8d8;
LAB_1001eb7a:
  if (DAT_10024000 < 2) {
    uVar2 = (byte)PTR_DAT_10023df0[(uint)bVar6 * 2] & 4;
  }
  else {
    uVar2 = FUN_1001cfab(bVar6,4);
  }
  if (uVar2 == 0) goto LAB_1001ebc4;
  iVar4 = (char)bVar6 + -0x30 + iVar4 * 10;
  if (0x1450 < iVar4) goto LAB_1001ebbc;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1001eb7a;
LAB_1001ebbc:
  iVar4 = 0x1451;
LAB_1001ebc4:
  while( true ) {
    local_20 = iVar4;
    if (DAT_10024000 < 2) {
      uVar2 = (byte)PTR_DAT_10023df0[(uint)bVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_1001cfab(bVar6,4);
    }
    if (uVar2 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar4 = local_20;
  }
LAB_1001ebf4:
  pbVar9 = pbVar8 + -1;
LAB_1001ebf9:
  *param_2 = (int)pbVar9;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1001ed07;
  }
  pcVar3 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar3 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar3 = pcVar3 + -1, *pcVar3 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_1001e7ba(local_60,local_8,&local_44);
    iVar4 = local_20;
    if (local_1c < 0) {
      iVar4 = -local_20;
    }
    iVar4 = iVar4 + local_c;
    if (local_24 == 0) {
      iVar4 = iVar4 + param_5;
    }
    if (local_28 == 0) {
      iVar4 = iVar4 - param_6;
    }
    if (iVar4 < 0x1451) {
      if (-0x1451 < iVar4) {
        FUN_1001f42a(&local_44,iVar4,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1001ec8c;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_1001ec8c:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_1001ed07:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}


/*
 * FUN_1001ed52 at 1001ed52
 * undefined FUN_1001ed52(void)
 * Address ranges: 1001ed52-1001efe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4
FUN_1001ed52(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar2 = param_6;
  uVar4 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar4 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar4 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001ee47;
          pcVar10 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1001ee47:
            pcVar10 = "1#QNAN";
            goto LAB_1001ee4c;
          }
          pcVar10 = "1#IND";
        }
        FUN_1001d6d0(param_6 + 2,pcVar10);
        *(undefined1 *)((int)psVar2 + 3) = 5;
      }
      else {
        pcVar10 = "1#SNAN";
LAB_1001ee4c:
        FUN_1001d6d0(param_6 + 2,pcVar10);
        *(undefined1 *)((int)psVar2 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar4;
    cStack_9 = (char)(uVar4 >> 8);
    local_e = (undefined2)param_2;
    uStack_c = (undefined2)(param_2 >> 0x10);
    local_12 = (undefined2)param_1;
    uStack_10 = (undefined2)((uint)param_1 >> 0x10);
    sVar7 = (short)(((uVar4 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar4 * 0x4d10 >>
                   0x10);
    FUN_1001f42a(&local_14,-(int)sVar7,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar7 = sVar7 + 1;
      FUN_1001f20a(&local_14,&local_20);
    }
    *psVar2 = sVar7;
    iVar9 = param_4;
    if (((param_5 & 1) == 0) || (iVar9 = param_4 + sVar7, 0 < param_4 + sVar7)) {
      if (0x15 < iVar9) {
        iVar9 = 0x15;
      }
      iVar8 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_1001e75f(&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar8 < 0) {
        param_6 = (short *)0x0;
        for (uVar4 = -iVar8 & 0xff; uVar4 != 0; uVar4 = uVar4 - 1) {
          FUN_1001e78d(&local_14);
        }
      }
      param_4 = iVar9 + 1;
      psVar5 = psVar2 + 2;
      param_6 = psVar5;
      if (0 < param_4) {
        do {
          param_1 = CONCAT22(local_12,local_14);
          param_2 = CONCAT22(local_e,uStack_10);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,uStack_c));
          FUN_1001e75f(&local_14);
          FUN_1001e75f(&local_14);
          ___add_12(&local_14,&param_1);
          FUN_1001e75f(&local_14);
          cVar3 = cStack_9;
          cStack_9 = '\0';
          psVar5 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar3 + '0';
          param_6 = psVar5;
        } while (param_4 != 0);
      }
      psVar6 = psVar5 + -1;
      psVar1 = psVar2 + 2;
      if ('4' < *(char *)((int)psVar5 + -1)) {
        for (; psVar1 <= psVar6; psVar6 = (short *)((int)psVar6 + -1)) {
          if ((char)*psVar6 != '9') {
            if (psVar1 <= psVar6) goto LAB_1001efa4;
            break;
          }
          *(char *)psVar6 = '0';
        }
        psVar6 = (short *)((int)psVar6 + 1);
        *psVar2 = *psVar2 + 1;
LAB_1001efa4:
        *(char *)psVar6 = (char)*psVar6 + '\x01';
LAB_1001efa6:
        cVar3 = ((char)psVar6 - (char)psVar2) + -3;
        *(char *)((int)psVar2 + 3) = cVar3;
        *(undefined1 *)(cVar3 + 4 + (int)psVar2) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar6; psVar6 = (short *)((int)psVar6 + -1)) {
        if ((char)*psVar6 != '0') {
          if (psVar1 <= psVar6) goto LAB_1001efa6;
          break;
        }
      }
      *psVar2 = 0;
      *(undefined1 *)(psVar2 + 1) = 0x20;
      *(undefined1 *)((int)psVar2 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1001efdc;
    }
  }
  *psVar2 = 0;
  *(undefined1 *)(psVar2 + 1) = 0x20;
  *(undefined1 *)((int)psVar2 + 3) = 1;
  *(undefined1 *)(psVar2 + 2) = 0x30;
LAB_1001efdc:
  *(undefined1 *)((int)psVar2 + 5) = 0;
  return 1;
}


/*
 * FUN_1001efe5 at 1001efe5
 * undefined FUN_1001efe5(void)
 * Address ranges: 1001efe5-1001f015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001efe5(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_1001cb79(param_1);
    uVar1 = FUN_1001f016(param_1);
    FUN_1001cbcb(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}


/*
 * FUN_1001f016 at 1001f016
 * undefined FUN_1001f016(void)
 * Address ranges: 1001f016-1001f061
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001f016(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x83) != 0) {
    uVar2 = FUN_1001e23f(param_1);
    FUN_1001f586(param_1);
    iVar1 = FUN_1001f4a6(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_10018dc8(*(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}


/*
 * FUN_1001f062 at 1001f062
 * undefined FUN_1001f062(void)
 * Address ranges: 1001f062-1001f0f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001f062(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_1020fd40 <= param_1) {
LAB_1001f0e3:
    puVar4 = (undefined4 *)FUN_1001df01();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_1001f0e3;
  FUN_1001e10f(param_1);
  if ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_1001e0cd(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_1001f0d8;
    pDVar3 = (DWORD *)FUN_1001df0a();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_1001df01();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_1001f0d8:
  FUN_1001e16e(param_1);
  return uVar6;
}


/*
 * FUN_1001f190 at 1001f190
 * undefined FUN_1001f190(void)
 * Address ranges: 1001f190-1001f1cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1001f190(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}


/*
 * FUN_1001f1d0 at 1001f1d0
 * undefined FUN_1001f1d0(void)
 * Address ranges: 1001f1d0-1001f209
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * FUN_1001f1d0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}


/*
 * FUN_1001f20a at 1001f20a
 * undefined FUN_1001f20a(void)
 * Address ranges: 1001f20a-1001f429
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001f20a(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar6 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar8 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar9 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar3 = uVar8 + uVar6;
  if (((uVar6 < 0x7fff) && (uVar8 < 0x7fff)) && (uVar3 < 0xbffe)) {
    if (uVar3 < 0x3fc0) {
LAB_1001f2ad:
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (((uVar6 != 0) || (uVar3 = uVar3 + 1, (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      if (((uVar8 == 0) && (uVar3 = uVar3 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1001f2ad;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)param_1);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = (int)param_2;
          do {
            iVar7 = FUN_1001e6e0(*(undefined4 *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 local_8 + -2);
            if (iVar7 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1._0_2_ = uVar3 + 0xc002;
      if ((short)(ushort)param_1 < 1) {
LAB_1001f361:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar7 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar7;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1001e78d(&local_28);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_1001e75f(&local_28);
          param_1._0_2_ = (ushort)param_1 - 1;
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1001f361;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar1 = CONCAT11(bStack_1d,uStack_1e), iVar2 = CONCAT22(local_20,uStack_22),
         iVar7 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar7 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar1 = -0x8000;
              iVar2 = 0;
              iVar7 = 0;
            }
            else {
              sVar1 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar2 = 0;
              iVar7 = 0;
            }
          }
          else {
            sVar1 = CONCAT11(bStack_1d,uStack_1e);
            iVar2 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar7 = CONCAT22(local_24,uStack_26) + 1;
          sVar1 = CONCAT11(bStack_1d,uStack_1e);
          iVar2 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar7 >> 0x10);
      uStack_26 = (undefined2)iVar7;
      local_20 = (undefined2)((uint)iVar2 >> 0x10);
      uStack_22 = (undefined2)iVar2;
      bStack_1d = (byte)((ushort)sVar1 >> 8);
      uStack_1e = (undefined1)sVar1;
      if (0x7ffe < (ushort)param_1) goto LAB_1001f40a;
      uVar6 = (ushort)param_1 | uVar9;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1001f40a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}


/*
 * FUN_1001f42a at 1001f42a
 * undefined FUN_1001f42a(void)
 * Address ranges: 1001f42a-1001f4a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001f42a(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_100244e0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10024640;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_1001f20a(param_1,ppuVar4);
      }
    }
  }
  return;
}


/*
 * FUN_1001f4a6 at 1001f4a6
 * undefined FUN_1001f4a6(void)
 * Address ranges: 1001f4a6-1001f502
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001f4a6(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_1020fd40) &&
     ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001e10f(param_1);
    uVar1 = FUN_1001f503(param_1);
    FUN_1001e16e(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1001df0a();
  *puVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_1001f503 at 1001f503
 * undefined FUN_1001f503(void)
 * Address ranges: 1001f503-1001f585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1001f503(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1001e0cd(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001e0cd(2);
      iVar2 = FUN_1001e0cd(1);
      if (iVar2 == iVar1) goto LAB_1001f551;
    }
    hObject = (HANDLE)FUN_1001e0cd(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001f553;
    }
  }
LAB_1001f551:
  DVar4 = 0;
LAB_1001f553:
  FUN_1001e04e(param_1);
  *(undefined1 *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1001de8e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


/*
 * FUN_1001f586 at 1001f586
 * undefined FUN_1001f586(void)
 * Address ranges: 1001f586-1001f5b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1001f586(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10018dc8(param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


/*
 * FUN_1001f5c0 at 1001f5c0
 * undefined FUN_1001f5c0(void)
 * Address ranges: 1001f5c0-1001f68f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1001f5c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  iVar2 = _DAT_1020e9e4;
  if (DAT_10025e90 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return '\0';
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
  }
  else {
    LOCK();
    _DAT_1020e9e4 = _DAT_1020e9e4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1020e9e0;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1020e9e4 = iVar2;
      FUN_1001a434(0x13);
    }
    uVar7 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001f66f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_1001d08f(bVar4,bVar5);
      bVar5 = FUN_1001d08f();
    } while (bVar4 == bVar5);
    cVar6 = (bVar4 < bVar5) * -2 + '\x01';
LAB_1001f66f:
    if (uVar7 == 0) {
      LOCK();
      _DAT_1020e9e4 = _DAT_1020e9e4 + -1;
      UNLOCK();
    }
    else {
      FUN_1001a495(0x13);
    }
  }
  return cVar6;
}


/*
 * FUN_1001f690 at 1001f690
 * undefined FUN_1001f690(void)
 * Address ranges: 1001f690-1001f790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001f690(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_1020e9e4;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_10025e90 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1001f6ef;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1001f6ef:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1020e9e4 = _DAT_1020e9e4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1020e9e0;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1020e9e4 = iVar2;
        FUN_1001a434(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1001d08f(uVar7,uVar5);
        uVar5 = FUN_1001d08f();
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1001f765;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1001f765:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1020e9e4 = _DAT_1020e9e4 + -1;
        UNLOCK();
      }
      else {
        FUN_1001a495(0x13);
      }
    }
  }
  return uVar6;
}


/*
 * KERNEL32.DLL::RtlUnwind at 1001f7d4
 * void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
 * Address ranges: 1001f7d4-1001f7d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::RtlUnwind
 */


void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1001f7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


