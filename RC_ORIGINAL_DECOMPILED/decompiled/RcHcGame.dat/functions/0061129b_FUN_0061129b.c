/*
 * FUN_0061129b at 0061129b
 * undefined FUN_0061129b(void)
 * Address ranges: 0061129b-006112bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0061129b(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    while( true ) {
      puVar1 = *(undefined4 **)(param_1 + 8);
      *(undefined4 **)(param_1 + 0xc) = puVar1;
      if (puVar1 == (undefined4 *)0x0) break;
      *(undefined4 *)(param_1 + 8) = *puVar1;
      (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}

