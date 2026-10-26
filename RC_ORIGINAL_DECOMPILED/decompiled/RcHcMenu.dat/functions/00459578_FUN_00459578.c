/*
 * FUN_00459578 at 00459578
 * undefined4 __register FUN_00459578(int * param_1)
 * Address ranges: 00459578-004595d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00459578(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    FUN_00403d94("Stack is empty.");
  }
  uVar2 = (**(code **)(*param_1 + 0xc))();
  uVar3 = (**(code **)(*param_1 + 4))();
  iVar4 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    thunk_FUN_00402874(uVar3);
    iVar4 = extraout_EDX;
  }
  FUN_00412224((int *)param_1[1],iVar4);
  return uVar2;
}

