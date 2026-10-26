/*
 * FUN_0051e184 at 0051e184
 * undefined4 __register FUN_0051e184(int param_1, undefined4 param_2)
 * Address ranges: 0051e184-0051e1b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0051e184(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x274))
                            (*(undefined4 **)(param_1 + 0x274),param_2);
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0051b568);
  return uVar2;
}

