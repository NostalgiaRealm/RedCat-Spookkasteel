/*
 * FUN_004152b8 at 004152b8
 * undefined __register FUN_004152b8(int param_1, char * param_2)
 * Address ranges: 004152b8-00415352;0041535a-00415360
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004152b8(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (DAT_00573630 == 0) {
    return;
  }
  puStack_1c = (undefined1 *)0x4152de;
  piVar1 = (int *)FUN_00412824(DAT_00573630);
  puStack_20 = &LAB_00415353;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = piVar1[2] + -1;
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      piVar2 = (int *)FUN_00412384(piVar1,iVar4);
      if ((param_1 == 0) || (piVar2[2] == param_1)) {
        if (param_2 != (char *)0x0) {
          uVar3 = FUN_004097ac(param_2,(char *)piVar2[4]);
          if ((char)uVar3 == '\0') goto LAB_00415335;
        }
        FUN_00412224(piVar1,iVar4);
        FUN_00403094(piVar2);
      }
LAB_00415335:
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x41535a;
  puStack_20 = (undefined1 *)0x415352;
  FUN_00412888(DAT_00573630);
  return;
}

