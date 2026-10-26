/*
 * FUN_0049da10 at 0049da10
 * undefined FUN_0049da10(void)
 * Address ranges: 0049da10-0049da34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049da10(int param_1)

{
  int iStack_c;
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    iStack_c = param_1;
    FUN_004042e0(&iStack_c);
    FUN_0049c880();
  }
  return;
}

