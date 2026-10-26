/*
 * FUN_004032cc at 004032cc
 * undefined __register FUN_004032cc(int * param_1, ushort * param_2)
 * Address ranges: 004032cc-004032f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x401170 slot -5 for TObject. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x401170 slot -5 for TObject.
   Original bytes unchanged; names and types still inferred. */

void FUN_004032cc(int *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 unaff_EBX;
  bool bVar2;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) && (bVar2 = uVar1 == 0xc000, uVar1 < 0xc000)) {
    FUN_00403240(*param_1);
    if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x004032ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004032ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + -0x10))();
  return;
}

