/*
 * FUN_005ebb80 at 005ebb80
 * undefined FUN_005ebb80(void)
 * Address ranges: 005ebb80-005ebdc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ebce4) */
/* WARNING: Removing unreachable block (ram,0x005ebcee) */
/* WARNING: Removing unreachable block (ram,0x005ebcf8) */
/* WARNING: Removing unreachable block (ram,0x005ebcf2) */

void __thiscall FUN_005ebb80(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined **local_20;
  undefined1 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647050;
  pvStack_c = ExceptionList;
  local_1c = (undefined1)param_2;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_20 = &PTR_FUN_00650ae8;
  piVar1 = (int *)(param_1 + 0x28);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005e6ff0(param_2,piVar1);
  FUN_005e4140(s_Compiler_version___d_006b11bc,*piVar1);
  FUN_005e7570(param_1 + 0x2c,4);
  uVar3 = FUN_0060d240(param_1 + 0x2c);
  FUN_005e4140(s_Compilation_time___s_006b11a4,uVar3);
  if (*piVar1 != 0x1b) {
    auStack_48[0] = (undefined1)local_4;
    uVar4 = 0xffffffff;
    iStack_44 = 0;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uStack_40 = 0;
    uStack_3c = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    uVar4 = 0xffffffff;
    pvStack_c._0_1_ = 1;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    pvStack_c._0_1_ = 2;
    uVar3 = FUN_005e7110(auStack_38,s_runtimelib_version___d__differs_f_006b1168,0x1b,*piVar1);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
    FUN_005ea160(0xbbb,uVar3,&stack0xffffffa8,auStack_48);
    if (iStack_34 != 0) {
      cVar2 = *(char *)(iStack_34 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_34 + -1));
      }
      else {
        *(char *)(iStack_34 + -1) = cVar2 + -1;
      }
    }
    uStack_2c = 0;
    uStack_30 = 0;
    iStack_34 = 0;
    pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
    if (iStack_44 != 0) {
      cVar2 = *(char *)(iStack_44 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_44 + -1));
      }
      else {
        *(char *)(iStack_44 + -1) = cVar2 + -1;
      }
    }
    iStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  uVar3 = local_4;
  FUN_005ed400(local_4,auStack_28,param_1);
  FUN_005ed400(uVar3,auStack_28,param_1);
  FUN_005ed400(uVar3,auStack_28,param_1);
  FUN_005ed400(uVar3,auStack_28,param_1);
  FUN_005ed400(uVar3,auStack_28,param_1);
  FUN_005efa30(param_1);
  pvStack_c = (void *)0xffffffff;
  FUN_005efa70();
  ExceptionList = local_14;
  return;
}

