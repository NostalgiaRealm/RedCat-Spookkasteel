/*
 * FUN_0042bd00 at 0042bd00
 * undefined FUN_0042bd00(void)
 * Address ranges: 0042bd00-0042bf65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0042bd00(int *param_1,undefined4 param_2,int **param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int **ppiStack_fc;
  int *local_e8 [6];
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined4 local_c8;
  int iStack_c4;
  int **ppiStack_28;
  int **ppiStack_24;
  undefined4 uStack_20;
  int **ppiStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623297;
  local_c = ExceptionList;
  ppiStack_fc = local_e8;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_004237d0();
  iVar4 = *piVar3;
  if (local_e8[0] != (int *)0x0) {
    iVar1 = local_e8[0][5];
    local_e8[0][5] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppiStack_fc = (int **)0x0;
      FUN_005abfc0();
    }
  }
  if (iVar4 != 0) {
    local_e8[0] = (int *)&ppiStack_fc;
    FUN_004237d0(&ppiStack_fc);
    iVar4 = FUN_004142f0();
    if (iVar4 != 0) {
      local_e8[0] = (int *)&ppiStack_fc;
      FUN_004042e0(&ppiStack_fc);
      FUN_00565c30();
      local_4 = 0;
      local_cf = 1;
      local_ce = 1;
      local_cd = 0;
      local_cc = 1;
      local_cb = 0;
      local_d0 = 1;
      local_ca = 0;
      local_c8 = 8;
      ppiStack_fc = (int **)0x42bdd0;
      ppiStack_fc = (int **)(**(code **)(*param_1 + 0x9c))();
      FUN_005663d0();
      ppiStack_fc = param_3;
      cVar2 = FUN_00565e10(param_2);
      if (cVar2 != '\0') {
        ppiStack_fc = (int **)0x0;
        iVar4 = FUN_0042bcf0(param_1);
        FUN_00503fc0(*(undefined4 *)(iVar4 + 0x24),param_1);
        local_4 = 2;
        ppiStack_fc = ppiStack_18;
        FUN_005fe5f0();
        ppiStack_18 = (int **)0x0;
        uStack_14 = 0;
        ppiStack_fc = ppiStack_24;
        uStack_10 = 0;
        FUN_00587d50(ppiStack_28);
        ppiStack_fc = ppiStack_28;
        FUN_005fe5f0();
        ppiStack_28 = (int **)0x0;
        ppiStack_24 = (int **)0x0;
        uStack_20 = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        if (iStack_c4 != 0) {
          ppiStack_fc = (int **)0x42be95;
          FUN_004098d0();
          iStack_c4 = 0;
        }
        local_4 = 0xffffffff;
        ppiStack_fc = (int **)0x42bead;
        FUN_005ab4d0();
        ExceptionList = local_c;
        return 1;
      }
      local_4 = 4;
      ppiStack_fc = ppiStack_18;
      FUN_005fe5f0();
      ppiStack_18 = (int **)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      ppiStack_fc = ppiStack_24;
      FUN_00587d50(ppiStack_28);
      ppiStack_fc = ppiStack_28;
      FUN_005fe5f0();
      ppiStack_28 = (int **)0x0;
      ppiStack_24 = (int **)0x0;
      uStack_20 = 0;
      local_4 = CONCAT31(local_4._1_3_,3);
      ppiStack_fc = (int **)0x42bf36;
      FUN_0057d310();
      local_4 = 0xffffffff;
      ppiStack_fc = (int **)0x42bf4a;
      FUN_005ab4d0();
    }
  }
  ExceptionList = local_c;
  return 0;
}

