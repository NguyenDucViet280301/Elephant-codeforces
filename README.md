Một con voi quyết định đến thăm bạn của mình. Hóa ra nhà của con voi nằm ở điểm 0 và nhà của bạn nó nằm ở điểm x ( x  > 0) của đường tọa độ. Trong một bước, con voi có thể di chuyển về phía trước 1 , 2 , 3 , 4 hoặc 5 vị trí. Xác định số bước tối thiểu mà nó cần thực hiện để đến được nhà bạn của mình.

Đầu vào:

Dòng đầu tiên của dữ liệu đầu vào chứa số nguyên x ( 1 ≤  x  ≤ 1 000 000 ) — Tọa độ ngôi nhà của người bạn.

Đầu ra:

In ra số bước tối thiểu mà con voi cần thực hiện để đi từ điểm 0 đến điểm x .

Giải quyết:

Vì con voi có thể di chuyển tối đa 5 vị trí trong mỗi bước, số bước tối thiểu mà con voi cần thực hiện có thể được xác định bằng cách chia tọa độ x cho 5.

Nếu x chia hết cho 5: Số bước tối thiểu là x / 5.

Nếu x không chia hết cho 5: Số bước tối thiểu sẽ là x / 5 và thêm 1 bước để di chuyển nốt các vị trí còn lại.
