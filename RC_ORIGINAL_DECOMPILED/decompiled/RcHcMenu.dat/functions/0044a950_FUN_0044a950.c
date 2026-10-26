/*
 * FUN_0044a950 at 0044a950
 * undefined4 __register FUN_0044a950(int * param_1)
 * Address ranges: 0044a950-0044a97a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044a950(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x24] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    iVar2 = FUN_00402fdc(param_1);
    if (iVar1 == iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}

