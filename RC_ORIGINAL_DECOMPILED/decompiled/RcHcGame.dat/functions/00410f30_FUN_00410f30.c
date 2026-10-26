/*
 * FUN_00410f30 at 00410f30
 * undefined FUN_00410f30(void)
 * Address ranges: 00410f30-004110d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64af2c slot 35 for .?AVCRcShootBat@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0041100f) */
/* WARNING: Removing unreachable block (ram,0x00411019) */
/* WARNING: Removing unreachable block (ram,0x00411023) */
/* WARNING: Removing unreachable block (ram,0x0041101d) */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64af2c slot 35 for
   .?AVCRcShootBat@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00410f30(int *param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  float10 fVar5;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00620df0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (3.4028235e+38 <= param_4) {
    ExceptionList = &local_c;
    fVar5 = (float10)FUN_00424950();
    param_4 = (float)fVar5;
  }
  if (param_2 != 1) {
    FUN_004233e0(param_2,param_3,param_4);
    ExceptionList = local_c;
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x88))(1);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    puStack_8 = (undefined1 *)0x0;
    pcVar2 = (code *)FUN_005a07f0(s_HasMotion_a_Type__0068ea04,
                                  s_D__Work_RCHorror_RCSource_RcShoo_0068e9b4,0x89,&stack0xffffffd0)
    ;
    (*pcVar2)();
    puStack_8 = (undefined1 *)0xffffffff;
  }
  auStack_20[0] = (undefined1)param_3;
  uVar3 = 0xffffffff;
  iStack_1c = 0;
  pcVar4 = &DAT_0068e9fc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_004040f0(&DAT_0068e9fc,~uVar3 - 1);
  puStack_8 = (undefined1 *)0x1;
  (**(code **)(*param_1 + 0x9c))();
  FUN_004a0660(auStack_20,1,param_3);
  if (iStack_1c != 0) {
    cVar1 = *(char *)(iStack_1c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_1c + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return;
    }
    FUN_005fe5f0((char *)(iStack_1c + -1));
  }
  ExceptionList = pvStack_10;
  return;
}

