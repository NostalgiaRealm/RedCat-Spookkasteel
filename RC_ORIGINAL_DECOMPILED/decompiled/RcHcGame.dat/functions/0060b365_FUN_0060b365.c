/*
 * FUN_0060b365 at 0060b365
 * undefined FUN_0060b365(void)
 * Address ranges: 0060b365-0060b3a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0060b365(undefined4 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00651bc0;
  sVar1 = _strlen((char *)*param_2);
  pvVar2 = operator_new(sVar1 + 1);
  param_1[1] = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_00611110(pvVar2,*param_2);
  }
  param_1[2] = 1;
  return param_1;
}

