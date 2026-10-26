/*
 * FUN_00487674 at 00487674
 * undefined __register FUN_00487674(int param_1)
 * Address ranges: 00487674-004876d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00487674(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x234) != 0) && (*(int *)(param_1 + 0x230) != 0)) {
    iVar1 = FUN_004804cc(DAT_0057394c,*(undefined **)(param_1 + 0x234));
    if (iVar1 != 0) {
      iVar1 = FUN_00480b14(iVar1,*(undefined **)(param_1 + 0x230),param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_0047f0a8();
        piVar2 = (int *)FUN_00480b14(iVar1,*(undefined **)(param_1 + 0x230),param_1);
        if (piVar2 != (int *)0x0) {
          FUN_00482d18(piVar2,'\x01');
        }
      }
    }
  }
  return;
}

