/*
 * FUN_10007efb at 10007efb
 * undefined __cdecl FUN_10007efb(undefined1 * param_1, undefined1 * param_2, int param_3)
 * Address ranges: 10007efb-10007f26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10007efb(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

