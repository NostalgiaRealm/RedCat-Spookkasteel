/*
 * FUN_005aa220 at 005aa220
 * undefined FUN_005aa220(void)
 * Address ranges: 005aa220-005aa26c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005aa220(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_005aac70(param_4);
  if (cVar1 != '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x6c);
    *param_3 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
  }
  *param_3 = 0;
  *param_2 = 0;
  return;
}

