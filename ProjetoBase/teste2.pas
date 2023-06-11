program exemplo5 (input, output);
var n, k      : integer;
   f1, f2, f3 : integer;
begin
   read (n);
   f1:=0; f2:=1; k:=1;
   while k<=n do
   begin
      f3:=f1+f2;
      f1:=f2;
      if f1 < f2 then
      begin
         f1 := f1 - 4;
         k := k + 1
      end;
      f2:=f3;
      k:=k+1
   end; 
   write (n, f1)
end.