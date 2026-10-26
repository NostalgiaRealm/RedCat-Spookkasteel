/*
 * FUN_0046adb8 at 0046adb8
 * undefined __register FUN_0046adb8(int * param_1, uint * param_2, undefined4 param_3)
 * Address ranges: 0046adb8-0046adfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046adb8(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  uint local_c;
  
  local_c = 0;
  cVar1 = FUN_00469218(param_1,(int)&local_c,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 != '\0') {
    if ((char)param_1[0xd] == '\x02') {
      *param_2 = (int)(short)local_c;
    }
    else if ((char)param_1[0xd] == '\x04') {
      *param_2 = local_c & 0xffff;
    }
    else {
      *param_2 = local_c;
    }
  }
  return;
}

