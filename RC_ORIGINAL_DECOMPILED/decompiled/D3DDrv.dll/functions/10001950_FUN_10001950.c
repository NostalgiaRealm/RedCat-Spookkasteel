/*
 * FUN_10001950 at 10001950
 * undefined __stdcall FUN_10001950(void)
 * Address ranges: 10001950-100019b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001950(void)

{
  float unaff_retaddr;
  int *piStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c [7];
  float fStack_10;
  float fStack_c;
  float fStack_4;
  
  puStack_30 = (undefined1 *)local_2c;
  local_2c[0] = 0x2c;
  piStack_34 = DAT_100274cc;
  (**(code **)(*DAT_100274cc + 0x40))();
  fStack_10 = ((fStack_4 + unaff_retaddr) * -1.0) / (unaff_retaddr - fStack_4);
  fStack_c = (((fStack_4 + unaff_retaddr) - 2.0) * -1.0) / (unaff_retaddr - fStack_4);
  (**(code **)(*DAT_100274cc + 0x44))(DAT_100274cc,&piStack_34);
  return;
}

