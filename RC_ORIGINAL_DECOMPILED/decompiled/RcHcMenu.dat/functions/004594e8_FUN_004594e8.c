/*
 * FUN_004594e8 at 004594e8
 * undefined4 __register FUN_004594e8(int * param_1)
 * Address ranges: 004594e8-00459539
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4593bc slot 3 for TObjectStack. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4593bc slot 3 for
   TObjectStack. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004594e8(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_EDX;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    FUN_00403d94("Stack is empty.");
  }
  uVar2 = (**(code **)(*param_1 + 4))();
  iVar4 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX;
  }
  uVar3 = FUN_00412384((undefined4 *)param_1[1],iVar4);
  return uVar3;
}

