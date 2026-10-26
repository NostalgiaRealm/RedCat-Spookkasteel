/*
 * FUN_0045a530 at 0045a530
 * uint __register FUN_0045a530(byte param_1, byte param_2)
 * Address ranges: 0045a530-0045a564
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0045a530(byte param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(&DAT_0056fcec + (uint)param_1 * 4) - *(int *)(&DAT_0056fcec + (uint)param_2 * 4);
  if (SBORROW4(*(int *)(&DAT_0056fcec + (uint)param_1 * 4),
               *(int *)(&DAT_0056fcec + (uint)param_2 * 4))) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  return uVar1;
}

