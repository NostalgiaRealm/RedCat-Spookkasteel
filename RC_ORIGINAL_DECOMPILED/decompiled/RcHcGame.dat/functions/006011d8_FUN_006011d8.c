/*
 * FUN_006011d8 at 006011d8
 * undefined FUN_006011d8(void)
 * Address ranges: 006011d8-00601222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006011d8(void)

{
  undefined1 local_10 [12];
  
  if ((DAT_0070fe18 & 1) == 0) {
    DAT_0070fe18 = DAT_0070fe18 | 1;
    FUN_00601223("bad allocation");
    FUN_0060a57b(&LAB_00601298);
  }
  FUN_00601280(&DAT_0070fe20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00689448);
}

