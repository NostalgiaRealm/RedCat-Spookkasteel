/*
 * FUN_10017480 at 10017480
 * undefined FUN_10017480(void)
 * Address ranges: 10017480-100175ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100174f7) */
/* WARNING: Removing unreachable block (ram,0x1001753e) */
/* WARNING: Removing unreachable block (ram,0x10017546) */
/* WARNING: Removing unreachable block (ram,0x1001756a) */
/* WARNING: Removing unreachable block (ram,0x100175a5) */

undefined4 FUN_10017480(int param_1)

{
  int iVar1;
  undefined4 in_stack_00000028;
  
  iVar1 = FUN_10017800(&stack0x00000028);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x1c))();
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x53e,&DAT_10265ce0,0);
    return 0;
  }
  return 0;
}

