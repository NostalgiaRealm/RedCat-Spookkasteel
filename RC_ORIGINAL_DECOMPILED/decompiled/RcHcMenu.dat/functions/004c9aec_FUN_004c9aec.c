/*
 * FUN_004c9aec at 004c9aec
 * undefined1 __register FUN_004c9aec(int param_1)
 * Address ranges: 004c9aec-004c9b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004c9aec(int param_1)

{
  if ((*(char *)(param_1 + 0x208) != '\0') &&
     (((((*(char *)(param_1 + 0x208) == '\x01') != (bool)*(char *)(param_1 + 0x1f8) ||
        ((*(char *)(param_1 + 0x208) == '\x02') != (bool)*(char *)(param_1 + 0x1f9))) ||
       (*(int *)(&DAT_00571c18 + (uint)*(byte *)(param_1 + 0x208) * 4) != *(int *)(param_1 + 0x1fc))
       ) || (*(char *)(param_1 + 0x210) != '\0')))) {
    *(undefined1 *)(param_1 + 0x208) = 0;
  }
  return *(undefined1 *)(param_1 + 0x208);
}

