/*
 * FUN_00420214 at 00420214
 * undefined __register FUN_00420214(int param_1)
 * Address ranges: 00420214-00420283;0042028b-0042028f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00420214(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (param_1 != 0) {
    puStack_14 = (undefined1 *)0x42022d;
    puVar1 = (undefined4 *)FUN_00412824(DAT_0056f64c);
    puStack_18 = &LAB_00420284;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    iVar3 = puVar1[2] + -1;
    puStack_14 = &stack0xfffffffc;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_00412384(puVar1,iVar3);
        if ((piVar2[0x16] != 0) && (*(int *)(*(int *)(piVar2[0x16] + 0x20) + 8) == param_1)) {
          FUN_004202f8(piVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x42028b;
    puStack_18 = (undefined1 *)0x420283;
    FUN_00412888(DAT_0056f64c);
    return;
  }
  return;
}

