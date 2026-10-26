/*
 * FUN_00539ed0 at 00539ed0
 * undefined FUN_00539ed0(void)
 * Address ranges: 00539ed0-00539f25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00539ed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    iVar1 = FUN_0053b650(param_2);
    if (iVar1 == 0xd) {
      FUN_0053a710(*(undefined4 *)(param_1 + 100));
      FUN_00537ee0(2);
      FUN_0053a6c0();
      return 1;
    }
  }
  uVar2 = FUN_00539910(param_2,param_3);
  return uVar2;
}

