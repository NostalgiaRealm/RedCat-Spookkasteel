/*
 * FUN_00487c0c at 00487c0c
 * undefined4 __register FUN_00487c0c(int param_1)
 * Address ranges: 00487c0c-00487c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 23 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 23 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00487c0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00480448(DAT_0057394c,*(undefined **)(param_1 + 0x234));
  if (iVar1 != 0) {
    iVar1 = FUN_00480448(DAT_0057394c,*(undefined **)(param_1 + 0x234));
    iVar1 = FUN_00480b14(iVar1,*(undefined **)(param_1 + 0x230),*(int *)(param_1 + 4));
    if ((iVar1 == 0) || (uVar2 = FUN_00483020(iVar1), (char)uVar2 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar2;
}

