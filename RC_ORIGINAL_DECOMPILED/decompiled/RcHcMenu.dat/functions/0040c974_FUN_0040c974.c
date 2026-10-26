/*
 * FUN_0040c974 at 0040c974
 * undefined __register FUN_0040c974(void)
 * Address ranges: 0040c974-0040ca0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040c974(void)

{
  LCID LVar1;
  CALID Calendar;
  undefined4 *puVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  CALID Calendar_00;
  byte **ppbVar4;
  CALTYPE CVar5;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_14 = &LAB_0040ca0b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  ppbVar4 = &local_8;
  LVar1 = GetThreadLocale();
  FUN_0040c6ec(LVar1,0x100b,(undefined4 *)&DAT_0040ca20,(int *)ppbVar4);
  Calendar = FUN_00409c80(local_8,1,extraout_ECX);
  if (Calendar - 3 < 3) {
    CVar5 = 4;
    Calendar_00 = Calendar;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040c8c0,LVar1,Calendar_00,CVar5);
    iVar3 = 7;
    puVar2 = &DAT_005735dc;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    CVar5 = 3;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040c8fc,LVar1,Calendar,CVar5);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040ca12;
  puStack_14 = (undefined1 *)0x40ca0a;
  FUN_00403db0((int *)&local_8);
  return;
}

