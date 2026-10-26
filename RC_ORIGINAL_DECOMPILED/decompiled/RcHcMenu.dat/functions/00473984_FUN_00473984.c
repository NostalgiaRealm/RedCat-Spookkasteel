/*
 * FUN_00473984 at 00473984
 * undefined4 __register FUN_00473984(int * param_1)
 * Address ranges: 00473984-004739ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00473984(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0047394c(param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004027e8(param_1[0x16]);
    uVar2 = FUN_004730d8((int)param_1);
    (**(code **)(*param_1 + 0x1b0))(param_1,uVar2,uVar1);
  }
  return uVar1;
}

