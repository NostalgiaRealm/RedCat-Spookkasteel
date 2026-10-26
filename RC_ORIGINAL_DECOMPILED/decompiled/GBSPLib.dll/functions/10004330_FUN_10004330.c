/*
 * FUN_10004330 at 10004330
 * undefined FUN_10004330(void)
 * Address ranges: 10004330-100043f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004330(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  pcVar4 = s_SkyTop_10036520;
  puVar5 = &DAT_1014e330;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &DAT_1014e330;
  do {
    pcVar1 = (char *)FUN_1000b0e0(&DAT_10265cf8,pcVar4);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      uVar2 = FUN_10011830(pcVar1,1);
      *puVar5 = uVar2;
    }
    pcVar4 = pcVar4 + 0x20;
    puVar5 = puVar5 + 1;
  } while ((int)pcVar4 < 0x100365e0);
  iVar3 = FUN_1000b1d0(&DAT_10265cf8,s_SkyAxis_10036a28,&DAT_1014e320);
  if (iVar3 == 0) {
    _DAT_1014e320 = 0;
    _DAT_1014e324 = 0;
    _DAT_1014e328 = 0;
  }
  fVar6 = (float10)FUN_1000b1b0(&DAT_10265cf8,s_SkyRotation_10036a1c);
  _DAT_1014e32c = (float)fVar6;
  fVar6 = (float10)FUN_1000b1b0(&DAT_10265cf8,s_SkyDrawScale_10036a0c);
  _DAT_1014e348 = (float)fVar6;
  if (fVar6 == (float10)0.0) {
    _DAT_1014e348 = 1.0;
  }
  return 1;
}

