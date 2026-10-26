/*
 * FUN_0044a35c at 0044a35c
 * undefined __register FUN_0044a35c(int * param_1, int * param_2)
 * Address ranges: 0044a35c-0044a55b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 5 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 5 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044a35c(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int nNumber;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x44a36f;
  FUN_00435304((int)param_1);
  puStack_18 = &LAB_0044a55c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  bVar2 = false;
  *(byte *)(param_1 + 0x87) = DAT_005734d1 ^ 1;
  puStack_14 = &stack0xfffffffc;
  FUN_00434b64(param_1,param_2);
  if ((param_1[0x91] != 0) && (0 < param_1[0x96])) {
    if (((*(byte *)(param_1 + 0x22) & 0x10) != 0) &&
       (param_1[0x91] != *(int *)(DAT_005737d8 + 0x34))) {
      iVar3 = param_1[0x91];
      iVar4 = *(int *)(DAT_005737d8 + 0x34);
      piVar1 = (int *)param_1[0x16];
      nNumber = FUN_0041bd28((int)piVar1);
      iVar3 = MulDiv(nNumber,iVar4,iVar3);
      FUN_0041bd30(piVar1,iVar3);
    }
    param_1[0x91] = *(int *)(DAT_005737d8 + 0x34);
    iVar3 = FUN_0044a68c((int)param_1);
    if (iVar3 != param_1[0x96]) {
      bVar2 = true;
      FUN_004498e4((int)param_1,iVar3,param_1[0x96]);
      FUN_004384d8((int)param_1,iVar3,param_1[0x96]);
      if ((*(byte *)(param_1 + 0x22) & 4) != 0) {
        iVar4 = MulDiv(param_1[0x94],iVar3,param_1[0x96]);
        param_1[0x94] = iVar4;
      }
      if ((*(byte *)(param_1 + 0x22) & 8) != 0) {
        iVar3 = MulDiv(param_1[0x95],iVar3,param_1[0x96]);
        param_1[0x95] = iVar3;
      }
    }
  }
  if (0 < param_1[0x94]) {
    FUN_00432190(param_1,param_1[0x94]);
  }
  if (0 < param_1[0x95]) {
    FUN_004321d4(param_1,param_1[0x95]);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  if (!bVar2) {
    FUN_004498e4((int)param_1,1,1);
    FUN_004384d8((int)param_1,1,1);
  }
  FUN_00433700((int)param_1,0xb03d,0,0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0044a563;
  puStack_18 = (undefined1 *)0x44a55b;
  FUN_0043530c((int)param_1);
  return;
}

