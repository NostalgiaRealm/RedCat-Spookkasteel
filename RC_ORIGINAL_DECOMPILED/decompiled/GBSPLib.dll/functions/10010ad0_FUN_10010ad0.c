/*
 * FUN_10010ad0 at 10010ad0
 * undefined FUN_10010ad0(void)
 * Address ranges: 10010ad0-10010b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10010ad0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10014310(0x431010);
  if (puVar1 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_Tri_PatchCreate__Out_of_memory__10039910);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  return puVar1;
}

