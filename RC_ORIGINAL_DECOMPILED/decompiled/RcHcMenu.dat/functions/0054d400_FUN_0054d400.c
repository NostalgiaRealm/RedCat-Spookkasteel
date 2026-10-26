/*
 * FUN_0054d400 at 0054d400
 * byte __register FUN_0054d400(char * param_1)
 * Address ranges: 0054d400-0054d487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_0054d400(char *param_1)

{
  int iVar1;
  byte local_9;
  
  iVar1 = FUN_0040431c("fsBold",param_1);
  local_9 = 0 < iVar1;
  iVar1 = FUN_0040431c("fsItalic",param_1);
  if (0 < iVar1) {
    local_9 = local_9 | 2;
  }
  iVar1 = FUN_0040431c("fsUnderline",param_1);
  if (0 < iVar1) {
    local_9 = local_9 | 4;
  }
  iVar1 = FUN_0040431c("fsStrikeOut",param_1);
  if (0 < iVar1) {
    local_9 = local_9 | 8;
  }
  return local_9;
}

