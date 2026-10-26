/*
 * FUN_004acfa0 at 004acfa0
 * undefined FUN_004acfa0(void)
 * Address ranges: 004acfa0-004acfe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004acfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_004de640(param_2,param_3);
  uVar2 = param_2;
  FUN_004ad0e0(param_2,param_3,param_1);
  FUN_004ad310(uVar2,param_3,param_1);
  FUN_004ad0e0(param_2);
  cVar1 = FUN_004ad3e0(param_2);
  if (cVar1 != '\0') {
    FUN_00502220();
  }
  return;
}

