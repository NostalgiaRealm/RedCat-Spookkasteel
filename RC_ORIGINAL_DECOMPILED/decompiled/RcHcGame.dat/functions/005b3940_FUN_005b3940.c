/*
 * FUN_005b3940 at 005b3940
 * undefined FUN_005b3940(void)
 * Address ranges: 005b3940-005b3add
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b3940(float param_1)

{
  float10 fVar1;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_005b3790();
  fVar1 = (float10)FUN_005b2e40();
  FUN_005b3020((float)((fVar1 - (float10)param_1) * (float10)-2.0),&local_3c);
  FUN_005b3670();
  FUN_005b3000(local_60);
  fVar1 = (float10)FUN_005b2e40();
  FUN_005b3020((float)((fVar1 - (float10)param_1) * (float10)-2.0),local_60);
  FUN_005b2fe0(local_60);
  FUN_005b2f20();
  FUN_005b3630();
  FUN_005b3000(local_48);
  fVar1 = (float10)FUN_005b2e40();
  FUN_005b3020((float)((fVar1 - (float10)param_1) * (float10)-2.0),local_48);
  FUN_005b2fe0(local_48);
  FUN_005b2f20();
  FUN_005b3650();
  FUN_005b3000(local_54);
  fVar1 = (float10)FUN_005b2e40();
  FUN_005b3020((float)((fVar1 - (float10)param_1) * (float10)-2.0),local_54);
  FUN_005b2fe0(local_54);
  FUN_005b2f20();
  FUN_005b38e0(local_54,local_60);
  FUN_005b2e20(local_3c,local_38,local_34);
  return;
}

