/*
 * FUN_10003e30 at 10003e30
 * undefined FUN_10003e30(void)
 * Address ranges: 10003e30-10003ed4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003e30(undefined4 param_1)

{
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_____Finalize_Faces_____100368c0);
  }
  DAT_10312684 = 0;
  DAT_10312fec = 0;
  DAT_1014e22c = 0;
  FUN_10003d80(param_1);
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_TotalFaces____5i_100368a0,DAT_1014e22c);
    (*DAT_1014e35c)(s_Merged_Faces____5i_10036880,DAT_10312684);
    (*DAT_1014e35c)(s_Subdivided_Faces____5i_10036860,DAT_10312fec);
    (*DAT_1014e35c)(s_FinalFaces____5i_10036840,(DAT_1014e22c - DAT_10312684) + DAT_10312fec);
  }
  return;
}

