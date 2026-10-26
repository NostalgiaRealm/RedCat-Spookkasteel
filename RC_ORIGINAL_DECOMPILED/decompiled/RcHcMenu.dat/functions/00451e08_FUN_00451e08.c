/*
 * FUN_00451e08 at 00451e08
 * undefined __register FUN_00451e08(int param_1)
 * Address ranges: 00451e08-00451e39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451e08(int param_1)

{
  tagPOINT tStack_c;
  
  FUN_00451cdc(param_1);
  if (*(char *)(param_1 + 0x79) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_00452058(param_1,&tStack_c.x);
  }
  else if (*(char *)(param_1 + 0x79) == '\x01') {
    FUN_00451e3c(param_1);
  }
  return;
}

