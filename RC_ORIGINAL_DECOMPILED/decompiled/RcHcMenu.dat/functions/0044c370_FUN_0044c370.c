/*
 * FUN_0044c370 at 0044c370
 * int * __register FUN_0044c370(int * param_1, int * param_2)
 * Address ranges: 0044c370-0044c5df;0044c5f3-0044c5fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 53 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 53 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

int * FUN_0044c370(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  DAT_0056f9d8 = DAT_0056f9d8 + 1;
  if (param_1[0x8e] == 0) {
    if (param_1 == param_2) {
      param_1[0x82] = 0;
    }
    else {
      param_1[0x82] = (int)param_2;
    }
  }
  *(int **)(DAT_005737d8 + 0x58) = param_2;
  *(int **)(DAT_005737d8 + 0x5c) = param_1;
  puStack_18 = (undefined1 *)0x44c3c7;
  FUN_0041251c(*(int **)(DAT_005737d8 + 0x44),(int)param_1);
  puStack_18 = (undefined1 *)0x44c3d8;
  FUN_00412400(*(int **)(DAT_005737d8 + 0x44),0,(int)param_1);
  puStack_18 = (undefined1 *)0x44c3e5;
  uVar3 = FUN_0040320c(param_1,(int)&PTR_FUN_00446f0c);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(DAT_005737d8 + 0x60) = 0;
  }
  else {
    *(int **)(DAT_005737d8 + 0x60) = param_1;
    puStack_18 = (undefined1 *)0x44c400;
    FUN_0041251c(*(int **)(DAT_005737d8 + 0x40),(int)param_1);
    puStack_18 = (undefined1 *)0x44c411;
    FUN_00412400(*(int **)(DAT_005737d8 + 0x40),0,(int)param_1);
  }
  if ((*(byte *)(param_2 + 0x11) & 0x20) != 0) {
    return (int *)0x0;
  }
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) | 0x20;
  puStack_1c = &LAB_0044c5e0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(DAT_005737d8 + 0x6c);
  puStack_18 = &stack0xfffffffc;
  if (param_1 != piVar1) {
    puStack_18 = &stack0xfffffffc;
    if (piVar1 != (int *)0x0) {
      puStack_18 = &stack0xfffffffc;
      pHVar4 = (HWND)FUN_00438988(piVar1);
      *(undefined4 *)(DAT_005737d8 + 0x6c) = 0;
      bVar2 = FUN_004483a0(pHVar4,0xb001);
      if (!bVar2) {
        FUN_004038cc();
        return (int *)0x0;
      }
    }
    *(int **)(DAT_005737d8 + 0x6c) = param_1;
    pHVar4 = (HWND)FUN_00438988(param_1);
    bVar2 = FUN_004483a0(pHVar4,CONCAT22(extraout_var,0xb000));
    if (!bVar2) {
      FUN_004038cc();
      return (int *)0x0;
    }
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = (int)param_1;
  }
  if ((int *)param_1[0x83] != param_2) {
    while ((param_1[0x83] != 0 && (bVar2 = thunk_FUN_0043554d(param_1[0x83],(int)param_2), !bVar2)))
    {
      pHVar4 = (HWND)FUN_00438988((int *)param_1[0x83]);
      param_1[0x83] = *(int *)(param_1[0x83] + 0x24);
      bVar2 = FUN_004483a0(pHVar4,CONCAT22(extraout_var_00,0xb01b));
      if (!bVar2) {
        FUN_004038cc();
        return (int *)0x0;
      }
    }
    while (piVar1 = param_2, (int *)param_1[0x83] != param_2) {
      do {
        piVar5 = piVar1;
        piVar1 = (int *)piVar5[9];
      } while ((int *)piVar5[9] != (int *)param_1[0x83]);
      param_1[0x83] = (int)piVar5;
      pHVar4 = (HWND)FUN_00438988(piVar5);
      bVar2 = FUN_004483a0(pHVar4,CONCAT22(extraout_var_01,0xb01a));
      if (!bVar2) {
        FUN_004038cc();
        return (int *)0x0;
      }
    }
    for (piVar1 = (int *)param_2[9]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[9]) {
      uVar3 = FUN_0040320c(piVar1,(int)&PTR_FUN_00445ea4);
      if ((char)uVar3 != '\0') {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
    }
    FUN_00433700((int)param_1,0xb007,0,param_2);
    piVar1 = (int *)param_1[0x99];
    if ((piVar1 != (int *)0x0) && (piVar1 != param_2)) {
      FUN_00433700((int)piVar1,0xb02a,0,0);
    }
  }
  *in_FS_OFFSET = uStack_20;
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) & 0xffdf;
  return param_2;
}

