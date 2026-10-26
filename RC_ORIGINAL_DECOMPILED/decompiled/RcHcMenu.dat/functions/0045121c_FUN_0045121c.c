/*
 * FUN_0045121c at 0045121c
 * undefined __register FUN_0045121c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0045121c-00451276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045121c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x24),0xb020,0,(LPARAM)&param_4);
    }
  }
  else {
    FUN_00412364(*(undefined4 **)(param_1 + 0x98));
    puVar1 = (undefined4 *)FUN_004027e8(8);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    FUN_004121d8(*(int **)(param_1 + 0x98),(int)puVar1);
  }
  return;
}

