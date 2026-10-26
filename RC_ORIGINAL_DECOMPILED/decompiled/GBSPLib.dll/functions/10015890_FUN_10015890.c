/*
 * FUN_10015890 at 10015890
 * undefined FUN_10015890(void)
 * Address ranges: 10015890-10015ab4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10015a2a) */
/* WARNING: Removing unreachable block (ram,0x10015a39) */
/* WARNING: Removing unreachable block (ram,0x10015a18) */
/* WARNING: Removing unreachable block (ram,0x10015a6a) */
/* WARNING: Removing unreachable block (ram,0x10015a79) */

int * FUN_10015890(void)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x7a6,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  if (local_4 != 0xf0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x7ab,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x7b0,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_10014c00();
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_10014310(0xf0);
    *piVar2 = iVar1;
    if (*piVar2 == 0) {
      FUN_10015fb0(0x41,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x7ca,&DAT_10265ce0,0);
      FUN_10014cc0();
      return (int *)0x0;
    }
    iVar1 = FUN_10014a00(0xf0);
    if (iVar1 != 0) {
      return piVar2;
    }
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,2000,&DAT_10265ce0,0);
    FUN_10014cc0();
    return (int *)0x0;
  }
  FUN_10015fb0(0x41,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x7c2,&DAT_10265ce0,0);
  return (int *)0x0;
}

