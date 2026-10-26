/*
 * FUN_0041aea0 at 0041aea0
 * undefined __register FUN_0041aea0(HGDIOBJ param_1)
 * Address ranges: 0041aea0-0041aeb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041aea0(HGDIOBJ param_1)

{
  if ((param_1 != (HGDIOBJ)0x0) && (param_1 != DAT_00573650)) {
    DeleteObject(param_1);
  }
  return;
}

