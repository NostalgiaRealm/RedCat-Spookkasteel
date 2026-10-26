/*
 * FUN_00516768 at 00516768
 * undefined4 __register FUN_00516768(char param_1)
 * Address ranges: 00516768-00516794
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00516768(char param_1)

{
  if (param_1 == '\x01') {
    return 1;
  }
  if (param_1 == '\x02') {
    return 2;
  }
  if (param_1 == '\x03') {
    return 4;
  }
  if (param_1 != '\x04') {
    return 0;
  }
  return 3;
}

