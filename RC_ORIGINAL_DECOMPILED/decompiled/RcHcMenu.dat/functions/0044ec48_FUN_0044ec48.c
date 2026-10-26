/*
 * FUN_0044ec48 at 0044ec48
 * undefined __register FUN_0044ec48(int param_1, int * param_2)
 * Address ranges: 0044ec48-0044ed06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot 1 for TDataModule. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot 1 for
   TDataModule. Original bytes unchanged; names and types still inferred. */

void FUN_0044ec48(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  FUN_00419288(param_1,param_2);
  puVar6 = &LAB_0044ee18;
  puVar5 = &LAB_0044ee50;
  iVar3 = param_1;
  iVar4 = param_1;
  bVar1 = FUN_0044ec20();
  (**(code **)(*param_2 + 4))(param_2,"Height",bVar1,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_0044edf0;
  puVar5 = &LAB_0044ee38;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_0044ebb8();
  (**(code **)(*param_2 + 4))(param_2,"HorizontalOffset",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_0044ee04;
  puVar5 = &LAB_0044ee44;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_0044ebec();
  (**(code **)(*param_2 + 4))(param_2,"VerticalOffset",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_0044eddc;
  puVar5 = &LAB_0044ee2c;
  iVar3 = param_1;
  bVar1 = FUN_0044eb90();
  (**(code **)(*param_2 + 4))(param_2,"Width",bVar1,puVar5,param_1,puVar6,iVar3);
  return;
}

