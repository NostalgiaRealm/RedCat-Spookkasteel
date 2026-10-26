/*
 * FUN_004368d0 at 004368d0
 * undefined FUN_004368d0(void)
 * Address ranges: 004368d0-00436a0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_004368d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_RCSource_RCPlay_00690328,0x836);
  local_4 = 0;
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar3,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  FUN_00492190();
  bVar4 = false;
  fVar5 = (float10)FUN_004d6960();
  fVar7 = (float)fVar5;
  uVar9 = *(undefined4 *)(param_1 + 0x37c);
  uVar6 = *(undefined4 *)(param_1 + 0x254);
  piVar1 = (int *)(param_1 + 0x360);
  piVar2 = (int *)(param_1 + 0x35c);
  uVar8 = 0x40490fdb;
  piVar10 = piVar2;
  piVar11 = piVar1;
  FUN_004969a0(uVar6,fVar7,0x40490fdb,uVar9,piVar2,piVar1);
  iVar3 = FUN_0042c280(uVar6,fVar7,uVar8,uVar9,piVar10,piVar11);
  *(int *)(param_1 + 0x354) = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
    *piVar1 = 0;
    FUN_00471140();
    FUN_00453ce0(0);
    if (DAT_006b5844 != '\0') {
      FUN_00458f90();
      DAT_006b5844 = '\0';
    }
    *(undefined1 *)(param_1 + 0x364) = 0;
  }
  else {
    bVar4 = *piVar2 != 0;
    if (bVar4) {
      FUN_00471040(*piVar2,1);
    }
    if (*piVar1 != 0) {
      FUN_00471040(*piVar1,0);
      bVar4 = true;
    }
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return bVar4;
}

