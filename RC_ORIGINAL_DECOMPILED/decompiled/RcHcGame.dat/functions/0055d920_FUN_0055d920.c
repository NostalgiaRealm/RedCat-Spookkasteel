/*
 * FUN_0055d920 at 0055d920
 * undefined FUN_0055d920(void)
 * Address ranges: 0055d920-0055d985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055d920(uint param_1)

{
  undefined4 uVar1;
  
  if (((int)param_1 < 0) || (DAT_006c8d98 <= param_1)) {
    return 0;
  }
  if ((&DAT_006bb35d)[param_1 * 0xb7c] != '\0') {
    if ((&DAT_006bb35c)[param_1 * 0xb7c] != '\0') {
      return 0;
    }
    if ((&DAT_006bb35d)[param_1 * 0xb7c] != '\0') {
      uVar1 = FUN_0055d990(param_1,&DAT_006a2c8c,&DAT_006a2c90);
      return uVar1;
    }
  }
  uVar1 = FUN_0055d990(param_1,&DAT_006a2c84,&DAT_006a2c88);
  return uVar1;
}

